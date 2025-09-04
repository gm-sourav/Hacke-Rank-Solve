#include <stdio.h>
#include <math.h>


double f(double x) {
    return (x * x * x - x - 1);
}


double f_derivative(double x) {
    return (3 * x * x - 1);
}

int main() {
    double x0, x1, error;
    int max_iter, i;

    printf("Enter initial guess: ");
    scanf("%lf", &x0);

    printf("Enter allowed error (tolerance): ");
    scanf("%lf", &error);

    printf("Enter maximum iterations: ");
    scanf("%d", &max_iter);

    printf("\nIteration\t x0\t\t f(x0)\t\t f'(x0)\t\t x1\n");

    for (i = 1; i <= max_iter; i++) {
        double f0 = f(x0);
        double f0_der = f_derivative(x0);

        if (f0_der == 0) {
            printf("Derivative is zero. Method fails.\n");
            return -1;
        }

        x1 = x0 - (f0 / f0_der);

        printf("%d\t\t %.6lf\t %.6lf\t %.6lf\t %.6lf\n",
               i, x0, f0, f0_der, x1);

        if (fabs(x1 - x0) < error) {
            printf("\nRoot found: %.6lf\n", x1);
            return 0;
        }

        x0 = x1;
    }

    printf("\nMethod did not converge within given iterations.\n");
    return 0;
}
