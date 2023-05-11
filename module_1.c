#include <math.h>
#include <stdio.h>

int main() {
    double num1 = sqrt(5 + 5 + pow(5, 2)); // обчислення чисельника першого доданку
    double den1 = sqrt(7 + 7 + pow(7, 2)); // обчислення знаменника першого доданку
    double num2 = sqrt(6 + 6 + pow(6, 2)); // обчислення чисельника другого доданку
    double den2 = sqrt(9 + 9 + pow(9, 2)); // обчислення знаменника другого доданку

    double result = (num1 / den1) + (num2 / den2); // обчислення результату

    printf("Результат: %f", result); // виведення результату на екран

    return 0; // кінець програми
}
