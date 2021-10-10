//
// Created by mixak on 10.10.2021.
//

#ifndef TASK_1_SHAPE_H
#define TASK_1_SHAPE_H



#include "sphere.h"
#include "parallelepiped.h"
#include "tetrahedron.h"

// Обобщённый артефакт - фигура.
struct shape {
    enum key { SPHERE, PARALLELEPIPED, TETRAHEDRON };
    key k;
    union {
        sphere sph;
        parallelepiped paral;
        tetrahedron tet;
    };
};

// Получение фигуры.
bool In(shape& s, ifstream& ifdt);

// Случайное заполнение фигуры.
bool InRnd(shape& s);

// Вывод фигуры в поток.
void Out(shape& s, ofstream& ofst);

// Вычисление объёма фигуры.
double Volume(shape& s);


#endif //TASK_1_SHAPE_H
