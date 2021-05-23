#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    if (a > b)
    {
        double temp = a;
        a = b, b = temp;
    }
    printf("%.2lf %.2lf\n", a, b);
    return 0;
}