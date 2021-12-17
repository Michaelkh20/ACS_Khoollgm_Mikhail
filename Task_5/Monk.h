#include "State.h"
#include <chrono>
#include <thread>
#include <string>

// Класс, реализующий монаха.
class Monk {
private:
    int chiEnergy;
    State state;
    std::string name;

public:
    // Конструктор класса.
    Monk(int chiEnergy, std::string name) {
        this->chiEnergy = chiEnergy;
        state = NONE;
        this->name = name;
    }

    // Монахи бьются в парах.
    void fight(Monk *other) {
        if (chiEnergy >= other->chiEnergy) {
            chiEnergy += other->chiEnergy;
            other->state = LOSE;
            state = WIN;
        } else {
            other->chiEnergy += chiEnergy;
            other->state = WIN;
            state = LOSE;
        }
    }

    // Отдых, если у монаха нет пары.
    void chillOut() {
        chiEnergy *= 2;
        state = WIN;
    }

    // Получение статуса монаха.
    State getState() const {
        return state;
    }

    // Метод для вывода монаха в строку.
    std::string toString() {
        return name + " with Chi energy = " + std::to_string(chiEnergy);
    }

    // Метод для вывода монаха, как победителя, в строку.
    std::string toStringWinner() {
        return name + " with Chi energy = " + std::to_string(chiEnergy) + " wins competition!!!";
    }
};
