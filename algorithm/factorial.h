//
// Created by 김규산 on 2021/12/17.
//


#ifndef SPECIALTY_FACTORIAL_H
#define SPECIALTY_FACTORIAL_H

int factorial (const int n) {
//    if (n == 0)
//        return 1;
//    else
//        return n * factorial(n - 1);

    return n == 0 ? 1 : n * factorial(n - 1);
}

int factorialLoop (const int n) {
    int result = 1;
    for (int i = n; i > 0; i--) result *= i;

    return result;
}

#endif //SPECIALTY_FACTORIAL_H
