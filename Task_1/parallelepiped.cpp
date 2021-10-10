//
// Created by mixak on 10.10.2021.
//

#include "parallelepiped.h"


void In(parallelepiped& paral, ifstream& ifst) {
    ifst >> paral.a >> paral.b >> paral.c >> paral.density;
}


void InRnd(parallelepiped& paral) {
    paral.a = Random();
    paral.b = Random();
    paral.c = Random();
    paral.density = Random()/1.0;
}


void Out(parallelepiped& paral, ofstream& ofst) {
    ofst << "It is Parallelepiped: a = "
         << paral.a << ", b = " << paral.b
         << ", c = " << paral.c <<", density = " << paral.density
         << ". Volume = " << Volume(paral) << "\n";
}


double Volume(parallelepiped& paral) {
    return static_cast<double>(paral.a * paral.b * paral.c);
}

