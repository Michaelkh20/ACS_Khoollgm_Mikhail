//
// Created by mixak on 10.10.2021.
//

#ifndef TASK_1_TETRAHEDRON_H
#define TASK_1_TETRAHEDRON_H


#include <fstream>

#include "rnd.h"

using namespace std;

// Структура, представляющая тэетраэдр.
struct tetrahedron {
    int edge;
    int density;
};

// Получение тэетраэдра из потока.
void In(tetrahedron& tet, ifstream& ifst);

// Случайное заполнение тэетраэдра.
void InRnd(tetrahedron& tet);

// Вывод тэетраэдра в поток.
void Out(tetrahedron& tet, ofstream& ofst);

// Вычисление объёма тэетраэдра.
double Volume(tetrahedron& tet);


#endif //TASK_1_TETRAHEDRON_H
