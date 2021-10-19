//
// Created by mixak on 12.10.2021.
//

#include "Sphere.h"

double const PI = 3.415926535;

void Sphere::In(std::ifstream &ifst) {
    ifst >> radius >> density;
}


void Sphere::InRandom() {
    radius = Random::RandomInt();
    density = Random::RandomDouble();
}


void Sphere::Out(std::ofstream &ofst) {
    ofst << "It is Sphere: Radius = " << radius
         << ", density = " << density
         << ". Volume = " << Volume() << "\n";
}


double Sphere::Volume() {
    return 4.0 * PI * radius * radius * radius / 3.0;
}
