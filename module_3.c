#include <stdio.h>
#include <math.h>

int main() {
    double x, result;

    printf("Введіть значення x: ");
    scanf("%lf", &x);

    if (x < -10) {
        result = 3 * pow(x, 3) - pow(x, 3);
    } else if (x >= -10 && x <= 10) {
        result = sqrt(10 - x);
    } else {
        result = 2 * x + 1;
    }

    printf("Значення функції f(x) дорівнює %.2lf", result);

    return 0;
}
