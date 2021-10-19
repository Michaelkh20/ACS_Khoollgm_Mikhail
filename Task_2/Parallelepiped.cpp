//
// Created by mixak on 12.10.2021.
//

#include "Parallelepiped.h"

void Parallelepiped::In(std::ifstream &ifst) {
    ifst >> a >> b >> c >> density;
}


void Parallelepiped::InRandom() {
    a = Random::RandomInt();
    b = Random::RandomInt();
    c = Random::RandomInt();
    density = Random::RandomDouble();
}


void Parallelepiped::Out(std::ofstream &ofst) {
    ofst << "It is Parallelepiped: a = "
         << a << ", b = " << b
         << ", c = " << c << ", density = " << density
         << ". Volume = " << Volume() << "\n";
}


double Parallelepiped::Volume() {
    return static_cast<double>(a * b * c);
}
