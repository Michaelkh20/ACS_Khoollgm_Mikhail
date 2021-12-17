#include <iostream>
#include "Competition.h"

// Управляющий метод.
int main() {
    auto* competition = new Competition();
    // Ввод значений.
    competition->enterValues();

    // Начало соревнования.
    competition->startCompetition();

    delete competition;
    return 0;
}
