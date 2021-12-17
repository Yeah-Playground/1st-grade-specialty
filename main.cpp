#include "util.h"
#include "./algorithm/factorial.h"

#define FACTORIAL_RECURSION 0
#define FACTORIAL_LOOP 1
#define EXIT_CODE 2

int main() {
    int input = -1;
    do {
        std::cout << "1. 팩토리얼 (재귀함수)" << std::endl;
        std::cout << "2. 팩토리얼 (반복문)" << std::endl;
        std::cout << "3. 종료" << std::endl;

        input = getIntInput(">> ") - 1;

        switch (input) {
            case FACTORIAL_RECURSION: {
                int n = getIntInput("정수 : ");
                std::cout << n << "! = ", std::cout << factorial(n) << std::endl << std::endl;
                break;
            }
            case FACTORIAL_LOOP:
                break;
            case EXIT_CODE:
            default:
                continue;
        }
    } while (input != EXIT_CODE);
}

