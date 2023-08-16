#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);

    printf("Addition: %g + %g = %g\n", a, b, a + b);
    printf("Subtraction: %g - %g = %g\n", a, b, a - b);
    printf("Multiplication: %g * %g = %g\n", a, b, a * b);
    printf("Division: %g / %g = %g\n", a, b, a / b);

    printf("Remainder: %g %% %g = %g\n", a, b, fmod(a, b));

    return 0;
}

#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter a Integer value of a and b: ");
    scanf("%g %g", &a, &b);

    printf("Addition: %g + %g = %g\n", a, b, a + b);
    printf("Subtraction: %g - %g = %g\n", a, b, a - b);
    printf("Multiplication: %g * %g = %g\n", a, b, a * b);
    printf("Division: %g / %g = %g\n", a, b, a / b);
    printf("Remainder: %g %% %g = %g\n", a, b, fmod(a, b));

    return 0;
}
