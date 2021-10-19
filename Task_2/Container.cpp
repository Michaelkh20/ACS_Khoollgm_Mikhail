//
// Created by mixak on 12.10.2021.
//

#include "Container.h"

Container::Container() :length(0){}
Container::~Container() {
    Clear();
}

void Container::Clear() {
    for(int i = 0; i < length; i++) {
        delete container[i];
        container[i] = nullptr;
    }
    length = 0;
}


void Container::In(std::ifstream &ifst) {
    while(!ifst.eof()) {
        if((container[length] = Shape::StaticIn(ifst)) != nullptr) {
            length++;
        }
    }
}


void Container::InRnd(int size) {
    while (length < size) {
        if((container[length] = Shape::StaticInRandom()) != nullptr) {
            length++;
        }
    }
}


void Container::Out(std::ofstream &ofst) {
    ofst << "Container contains " << length << " elements.\n";
    for (int i = 0; i < length; ++i) {
        ofst << i << ": ";
        container[i]->Out(ofst);
    }
}


void Container::DeleteShapesLargerThanAverage() {
    double sum = 0.0, averageVolume;
    for (int i = 0; i < length; ++i) {
        sum += container[i]->Volume();
    }

    averageVolume = sum / length;

    for (int i = 0; i < length; ++i) {
        if (container[i]->Volume() > averageVolume) {
            for (int j = i; j < length - 1; ++j) {
                container[j] = container[j + 1];
            }
            --length;
        }
    }

}
