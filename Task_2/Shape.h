//
// Created by mixak on 12.10.2021.
//

#ifndef TASK_2_SHAPE_H
#define TASK_2_SHAPE_H


#include <fstream>

#include "Random.h"

class Shape {
protected:
    double density{};
public:
    virtual ~Shape() {};

    // Получение фигуры.
    static Shape *StaticIn(std::ifstream &ifst);

    // Случайное заполнение фигуры.
    static Shape *StaticInRandom();

    virtual void In(std::ifstream &ifst) = 0;

    virtual void InRandom() = 0;

    // Вывод фигуры в поток.
    virtual void Out(std::ofstream &ofst) = 0;

    // Вычисление объёма фигуры.
    virtual double Volume() = 0;
};


#endif //TASK_2_SHAPE_H
