//
// Created by mixak on 10.10.2021.
//

#ifndef TASK_1_PARALLELEPIPED_H
#define TASK_1_PARALLELEPIPED_H


#include <fstream>

#include "rnd.h"

using namespace std;

// Структура, представляющая параллелепипед.
struct parallelepiped {
    int a, b, c;
    double density;
};

// Ввод параллелепипеда из потока.
void In(parallelepiped& paral, ifstream& ifst);

// Получение случайного параллелепипеда.
void InRnd(parallelepiped& paral);

// Вывод параллелепипеда в поток.
void Out(parallelepiped& paral, ofstream& ofst);

// Объём параллелепипеда.
double Volume(parallelepiped& paral);


#endif //TASK_1_PARALLELEPIPED_H
