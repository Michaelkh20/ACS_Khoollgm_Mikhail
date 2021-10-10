//
// Created by mixak on 10.10.2021.
//

#include "container.h"

void Init(container& c) {
    c.len = 0;
}

void Clear(container& c) {
    c.len = 0;
}


void In(container& c, ifstream& ifst) {
    while (!ifst.eof()) {
        if (In(c.cont[c.len], ifst)) {
            ++c.len;
        }
    }
}


void InRnd(container& c, int size) {
    while (c.len < size) {
        if (InRnd(c.cont[c.len])) {
            c.len++;
        }
    }
}


void Out(container& c, ofstream& ofst) {
    ofst << "Container contains " << c.len << " elements.\n";
    for (int i = 0; i < c.len; ++i) {
        ofst << i << ": ";
        Out(c.cont[i], ofst);
    }
}


void DeleteShapesLargerThanAverage(container& c) {
    double sum = 0.0, averageVolume;
    for (int i = 0; i < c.len; ++i) {
        sum += Volume(c.cont[i]);
    }

    averageVolume = sum / c.len;

    for (int i = 0; i < c.len; ++i) {
        if (Volume(c.cont[i]) > averageVolume) {
            for (int j = i; j < c.len - 1; ++j) {
                c.cont[j] = c.cont[j + 1];
            }
            --c.len;
        }
    }

}


