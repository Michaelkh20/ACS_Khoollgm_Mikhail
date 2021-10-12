//
// Created by mixak on 10.10.2021.
//

#include "shape.h"


bool In(shape& s, ifstream& ifst) {
    int k;
    ifst >> k;
    switch (k) {
        case 1:
            s.k = shape::SPHERE;
            In(s.sph, ifst);
            return true;
        case 2:
            s.k = shape::PARALLELEPIPED;
            In(s.paral, ifst);
            return true;
        case 3:
            s.k = shape::TETRAHEDRON;
            In(s.tet, ifst);
            return true;
        default:
            return false;
    }
}


bool InRnd(shape& s) {
    auto k = rand() % 3 + 1;
    switch (k) {
        case 1:
            s.k = shape::SPHERE;
            InRnd(s.sph);
            return true;
        case 2:
            s.k = shape::PARALLELEPIPED;
            InRnd(s.paral);
            return true;
        case 3:
            s.k = shape::TETRAHEDRON;
            InRnd(s.tet);
            return true;
        default:
            return false;
    }
}


void Out(shape& s, ofstream& ofst) {
    switch (s.k) {
        case shape::SPHERE:
            Out(s.sph, ofst);
            break;
        case shape::PARALLELEPIPED:
            Out(s.paral, ofst);
            break;
        case shape::TETRAHEDRON:
            Out(s.tet, ofst);
            break;
        default:
            ofst << "Incorrect figure!\n";
    }
}


double Volume(shape& s) {
    switch (s.k) {
        case shape::SPHERE:
            return Volume(s.sph);
            break;
        case shape::PARALLELEPIPED:
            return Volume(s.paral);
            break;
        case shape::TETRAHEDRON:
            return Volume(s.tet);
            break;
        default:
            return 0.0;
    }
}

