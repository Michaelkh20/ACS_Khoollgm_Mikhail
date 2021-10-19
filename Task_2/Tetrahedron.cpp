//
// Created by mixak on 12.10.2021.
//

#include <cmath>
#include "Tetrahedron.h"

void Tetrahedron::In(std::ifstream &ifst) {
    ifst >> edge >> density;
}


void Tetrahedron::InRandom() {
    edge = Random::RandomInt();
    density = Random::RandomDouble();
}


void Tetrahedron::Out(std::ofstream &ofst) {
    ofst << "It is Tetrahedron: Edge = " << edge
         << ", density = " << density
         << ". Volume = " << Volume() << "\n";
}


double Tetrahedron::Volume() {
    return sqrt(2) * edge * edge * edge / 12;
}