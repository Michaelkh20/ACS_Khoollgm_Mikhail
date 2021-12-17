#include <thread>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <cstdlib>
#include "Monk.h"

// Класс, реализующий соревнование.
class Competition {
private:
    std::vector<Monk *> monks;

    // Перестановка элементов вектора в случайном порядке.
    void shakeVector() {
        size_t monksSize = monks.size();

        srand(time(0));

        for (int i = 0; i < monksSize; ++i)
            std::swap(monks[i], monks[std::rand() % monksSize]);
    }

    // Очистка вектора от проигравших.
    void clearVector() {
        auto iter = monks.begin();
        for (long i = monks.size() - 1; i >= 0; --i) {
            if (monks[i]->getState() == LOSE) {
                delete monks[i];
                monks.erase(iter + i);
            }
        }
    }

public:
    virtual ~Competition() {
        for (auto monk: monks) {
            delete monk;
        }
    }

public:

    // Метод, начинающий соревнование.
    void startCompetition() {

        while (monks.size() > 1) {
            shakeVector();

            std::vector<std::thread> currentThreads;

            // Запусков нескольких боёв параллельно.
            for (int i = 0; i < monks.size() / 2; ++i) {
                Monk *firstMonk = monks[2 * i];
                Monk *secondMonk = monks[2 * i + 1];
                currentThreads.emplace_back([firstMonk, secondMonk]() { firstMonk->fight(secondMonk); });
            }

            // Запуск отдыха для монаха, для которого не нашлось пары.
            if (monks.size() % 2 == 1) {
                Monk *monk = monks[monks.size() - 1];
                currentThreads.emplace_back([monk]() { monk->chillOut(); });
            }

            for (auto &threadMonk: currentThreads) {
                threadMonk.join();
            }

            clearVector();
        }

        std::cout << monks[0]->toStringWinner();

    }

    // Ввод значений энергии Ци монахов.
    void enterValues() {
        int value = 0, i = 1;

        while (true) {
            std::cin >> value;
            if (!value) break;
            monks.push_back(new Monk(value, "Monk #" + std::to_string(i++)));
        }
    }
};