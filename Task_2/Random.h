//
// Created by mixak on 12.10.2021.
//

#ifndef TASK_2_RANDOM_H
#define TASK_2_RANDOM_H

class Random {
public:
    static int RandomInt() {
        return rand() % 40 + 1;
    }

    static double RandomDouble() {
        return (rand() % 40 + 10) / 10.0;
    }
};

#endif //TASK_2_RANDOM_H
