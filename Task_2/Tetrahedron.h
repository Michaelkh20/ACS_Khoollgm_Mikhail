//
// Created by mixak on 12.10.2021.
//

#ifndef TASK_2_TETRAHEDRON_H
#define TASK_2_TETRAHEDRON_H

#include "Shape.h"

class Tetrahedron : public Shape {
private:
    int edge;
public:
    ~Tetrahedron() override {};

    // Получение тэетраэдра из потока.
    void In(std::ifstream &ifst) override;

// Случайное заполнение тэетраэдра.
    void InRandom() override;

// Вывод тэетраэдра в поток.
    void Out(std::ofstream &ofst) override;

// Вычисление объёма тэетраэдра.
    double Volume() override;
};


#endif //TASK_2_TETRAHEDRON_H
