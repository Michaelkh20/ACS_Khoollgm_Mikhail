//
// Created by mixak on 10.10.2021.
//

#ifndef TASK_1_SPHERE_H
#define TASK_1_SPHERE_H


#include <fstream>

#include "rnd.h"

using namespace std;

// Структура, представляющая шар.
struct sphere {
    int radius;
    int density;
};

// Получение шара из потока.
void In(sphere& sph, ifstream& ifst);

// Случаное заполнение шара.
void InRnd(sphere& sph);

// Вывод шара в поток.
void Out(sphere& sph, ofstream& ofst);

// Вычисление объёма шара.
double Volume(sphere& sph);


#endif //TASK_1_SPHERE_H
