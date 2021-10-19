//
// Created by mixak on 12.10.2021.
//

#ifndef TASK_2_PARALLELEPIPED_H
#define TASK_2_PARALLELEPIPED_H

#include "Shape.h"

class Parallelepiped : public Shape {
private:
    int a, b, c;
public:
    ~Parallelepiped() override { };

    // Ввод параллелепипеда из потока.
    void In(std::ifstream &ifst) override;

    // Получение случайного параллелепипеда.
    void InRandom() override;

    // Вывод параллелепипеда в поток.
    void Out(std::ofstream &ofst) override;

    // Объём параллелепипеда.
    double Volume() override;

};


#endif //TASK_2_PARALLELEPIPED_H
