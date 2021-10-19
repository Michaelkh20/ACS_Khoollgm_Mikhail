//
// Created by mixak on 12.10.2021.
//

#ifndef TASK_2_SPHERE_H
#define TASK_2_SPHERE_H


#include "Shape.h"

class Sphere : public Shape {
private:
    int radius;
public:
    ~Sphere() override {};

    // Получение шара из потока.
    void In(std::ifstream &ifst) override;

    // Случаное заполнение шара.
    void InRandom() override;

    // Вывод шара в поток.
    void Out(std::ofstream &ofst) override;

    // Вычисление объёма шара.
    double Volume() override;
};


#endif //TASK_2_SPHERE_H
