//
// Created by 김규산 on 2021/12/17.
//

#include "iostream"
#pragma once

#ifndef SPECIALTY_UTIL_H
#define SPECIALTY_UTIL_H

int getIntInput(std::string prefix) {
    int result;

    do {
        try {
            std::cout << prefix;

            std::string s;
            std::getline(std::cin, s);
            result = std::stoi(s);
            break;
        } catch (std::invalid_argument ex) {}
    } while (true);

    return result;
}

#endif //SPECIALTY_UTIL_H
