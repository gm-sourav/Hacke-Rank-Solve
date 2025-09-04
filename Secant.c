#include <stdio.h>
#include <math.h>


double f(double x) {
    return x*x*x - x - 1;
}

int main() {
    double x0, x1, x2, tolerance;
    int max_iter, i;

    printf("Enter first guess (x0): ");
    scanf("%lf", &x0);

    printf("Enter second guess (x1): ");
    scanf("%lf", &x1);

    printf("Enter tolerance : ");
    scanf("%lf", &tolerance);

    printf("Enter maximum iterations: ");
    scanf("%d", &max_iter);

    printf("\nIteration\t x0\t\t x1\t\t x2\t\t f(x2)\n");

    for (i = 1; i <= max_iter; i++) {
        if (f(x1) - f(x0) == 0) {
            printf("Mathematical Error: Division by zero\n");
            return 0;
        }

       
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));

        printf("%d\t\t %.6lf\t %.6lf\t %.6lf\t %.6lf\n", i, x0, x1, x2, f(x2));

        if (fabs(x2 - x1) < tolerance) {
            printf("\nRoot found: %.6lf\n", x2);
            return 0;
        }

        x0 = x1;
        x1 = x2;
    }

    printf("\nMethod did not converge within %d iterations.\n", max_iter);
    return 0;
}
