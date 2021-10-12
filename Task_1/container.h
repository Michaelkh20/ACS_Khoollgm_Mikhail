//
// Created by mixak on 10.10.2021.
//

#ifndef TASK_1_CONTAINER_H
#define TASK_1_CONTAINER_H


#include "shape.h"

// Контейнер, хранящий фигуры.
struct container {
    enum { max_len = 10000 };
    int len;
    shape cont[max_len];
};

// Инициализация контейнера.
void Init(container& c);

// Очистка контейнера.
void Clear(container& c);

// Получение контейнера из файла.
void In(container& c, ifstream& ifst);

// Случайное заполнение контейнера.
void InRnd(container& c, int size);

// Вывод контейнера в поток.
void Out(container& c, ofstream& ofst);

// Удаление элементов, объём которых больше среднего объёма фигур в контейнере.
void DeleteShapesLargerThanAverage(container& c);


#endif //TASK_1_CONTAINER_H
