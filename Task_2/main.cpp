#include <iostream>

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

#include "Container.h"

void errMessage1() {
    std::cout << "incorrect command line!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n";
}

void errMessage2() {
    std::cout << "incorrect qualifier value!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n";
}


int main(int argc, char *argv[]) {
    double timeSpent = 0.0;
    clock_t begin = clock();

    if (argc != 5) {
        errMessage1();
        return 1;
    }

    std::cout << "Start" << std::endl;
    Container* c = new Container();


    if (!strcmp(argv[1], "-f")) {
        std::cout << "From file :" << argv[2] << "\n";
        std::ifstream ifst(argv[2]);
        c->In(ifst);
    } else if (!strcmp(argv[1], "-n")) {
        std::cout << "RandomInt input\n";
        int size = atoi(argv[2]);
        if ((size < 1) || (size > 10000)) {
            std::cout << "incorrect number of figures = "
                      << size
                      << ". Set 0 < number <= 10000\n";
            return 3;
        }

        std::cout << size << " shapes\n";

        // системные часы в качестве инициализатора
        srand(static_cast<unsigned int>(time(0)));
        // Заполнение контейнера генератором случайных чисел
        c->InRnd(size);
    } else {
        errMessage2();
        return 2;
    }

    // Вывод содержимого контейнера в файл
    std::ofstream ofst1(argv[3]);
    ofst1 << "Filled Container:\n";
    c->Out(ofst1);

    // The 2nd part of task
    std::ofstream ofst2(argv[4]);
    c->DeleteShapesLargerThanAverage();
    ofst2 << "Shapes larger then average volume have been removed from Container" << "\n";
    std::cout << "Shapes larger then average volume have been removed from Container" << "\n";



    // Вывод содержимого контейнера в файл после удаления
    ofst2 << "Filled Container:\n";
    c->Out(ofst2);


    delete c;
    std::cout << "Stop" << std::endl;

    clock_t end = clock();
    timeSpent = (double) (end - begin);
    std::cout << "Time spent: " << timeSpent / CLOCKS_PER_SEC << "\n";

    return 0;
}

