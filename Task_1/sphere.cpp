//
// Created by mixak on 10.10.2021.
//

#include "sphere.h"

double const PI = 3.415926535;

void In(sphere& sph, ifstream& ifst) {
    ifst >> sph.radius>> sph.density;
}


void InRnd(sphere& sph) {
    sph.radius = Random();
    sph.density = Random()/1.0;
}


void Out(sphere& sph, ofstream& ofst) {
    ofst << "It is Sphere: Radius = " << sph.radius
            <<", density = " << sph.density
         << ". Volume = " << Volume(sph) << "\n";
}


double Volume(sphere& sph) {
    return 4.0 * PI * sph.radius * sph.radius * sph.radius / 3.0;
}
