//
// Created by 김규산 on 2021/12/17.
//


#ifndef SPECIALTY_FACTORIAL_H
#define SPECIALTY_FACTORIAL_H

const int factorial (const int n) {
//    if (n == 0)
//        return 1;
//    else
//        return n * factorial(n - 1);

    return n == 0 ? 1 : n * factorial(n - 1);
}

#endif //SPECIALTY_FACTORIAL_H
