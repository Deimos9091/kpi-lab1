#include <stdio.h>
int main() {
    double x, y;

    printf("Vvedit x: ");
    scanf("%lf", &x);

    // D1: (-10, -5] U (5, 15]
    if ((x > -10.0 && x <= -5.0) || (x > 5.0 && x <= 15.0)) {
        y = x * x * x - 6.0;
        printf("y = %lf\n", y);
    } 
    // D2: [25, +inf)
    else if (x >= 25.0) {
        y = 2.0 * x * x * x - 3.0 * x + 2.0;
        printf("y = %lf\n", y);
    } 
    // Во всех остальных случаях
    else {
        printf("Funkciya ne vyznachena\n");
    }

    return 0;
}