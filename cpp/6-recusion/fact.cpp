#include <stdio.h>

double fact(double n)
{
    double result = 1;
    while (n > 0)
    {
        result = result * n;
        n--;
    }
    return result;
}

int main()
{
    double num;
    printf("Enter number: ");
    scanf("%lf", &num);

    printf("Factorial: %f", fact(num));

    return 0;
}