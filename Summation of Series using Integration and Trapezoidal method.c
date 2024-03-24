#include <stdio.h>
#include <math.h>

// Function to define the function to be integrated
double f(double x) {
    return sin(x); // Change this function as per your requirement
}

// Function to calculate definite integral using trapezoidal rule
double trapezoidal_rule(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }
    return sum * h;
}

int main() {
    double a, b;
    int n;

    printf("Enter the lower limit of integration: ");
    scanf("%lf", &a);
    printf("Enter the upper limit of integration: ");
    scanf("%lf", &b);
    printf("Enter the number of subintervals: ");
    scanf("%d", &n);

    double integral = trapezoidal_rule(a, b, n);

    printf("The approximate value of the definite integral: %lf\n", integral);

    return 0;
}
