//
// Created by mixak on 10.10.2021.
//

#include <cmath>
#include "tetrahedron.h"


void In(tetrahedron& tet, ifstream& ifst) {
    ifst >> tet.edge >> tet.density;
}


void InRnd(tetrahedron& tet) {
    tet.edge = Random();
    tet.density = Random()/1.0;
}


void Out(tetrahedron& tet, ofstream& ofst) {
    ofst << "It is Tetrahedron: Edge = " << tet.edge
            <<", density = " << tet.density
         << ". Volume = " << Volume(tet) << "\n";
}


double Volume(tetrahedron& tet) {
    return sqrt(2) * tet.edge * tet.edge * tet.edge / 12;
}

