//
// Created by mixak on 14.10.2021.
//

#include "Shape.h"
#include "Sphere.h"
#include "Parallelepiped.h"
#include "Tetrahedron.h"

Shape *Shape::StaticIn(std::ifstream &ifst) {
    int identifier;
    ifst >> identifier;
    Shape *shape;
    switch (identifier) {
        case 1:
            shape = new Sphere();
            break;
        case 2:
            shape = new Parallelepiped();
            break;
        case 3:
            shape = new Tetrahedron();
            break;
        default:
            return nullptr;
    }
    shape->In(ifst);
    return shape;
}

Shape *Shape::StaticInRandom() {
    int identifier = Random::RandomInt() % 3 + 1;
    Shape *shape;
    switch (identifier) {
        case 1:
            shape = new Sphere();
            break;
        case 2:
            shape = new Parallelepiped();
            break;
        case 3:
            shape = new Tetrahedron();
            break;
        default:
            return nullptr;
    }
    shape->InRandom();
    return shape;
}
