#include <stdio.h>
int main() {
    double x, y;

    printf("Vvedite x: ");
    scanf("%lf", &x);

    // D1: (-10, -5] U (5, 15]
    if (x > -10.0) {
        if (x <= -5.0) {
            y = x * x * x - 6.0;
            printf("y = %lf\n", y);
        } else if (x > 5.0) {
            if (x <= 15.0) {
                y = x * x * x - 6.0;
                printf("y = %lf\n", y);
            } else if (x >= 25.0) { // D2: [25, +inf)
                y = 2.0 * x * x * x - 3.0 * x + 2.0;
                printf("y = %lf\n", y);
            } else {
                printf("Funkciya ne vyznachena\n");
            }
        } else {
            printf("Funkciya ne vyznachena\n");
        }
    } else {
        printf("Funkciya ne vyznachena\n");
    }

    return 0;
}