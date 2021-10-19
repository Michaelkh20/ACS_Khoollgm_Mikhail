//
// Created by mixak on 12.10.2021.
//

#ifndef TASK_2_CONTAINER_H
#define TASK_2_CONTAINER_H

#include <fstream>
#include "Shape.h"

class Container {
private:
    int length;
    Shape *container[10000];

    // Очистка контейнера.
    void Clear();

public:

    Container();
    ~Container();

// Получение контейнера из файла.
    void In(std::ifstream &ifst);

// Случайное заполнение контейнера.
    void InRnd(int size);

// Вывод контейнера в поток.
    void Out(std::ofstream &ofst);

// Удаление элементов, объём которых больше среднего объёма фигур в контейнере.
    void DeleteShapesLargerThanAverage();
};


#endif //TASK_2_CONTAINER_H
