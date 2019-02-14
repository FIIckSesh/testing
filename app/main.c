#include <stdio.h>

#include "myfunc.h"
#include "equatation.h"

int main()
{
    values val;
    int check;
    double a, b, c;
    printf("Введите коэффициенты: \n");
    check = scanf("%lf %lf %lf", &a, &b, &c);
    check = 0;
    val = equatation(a, b, c);
    if (val.flag == 2) printf("Solved: x1 = %.2lf, x2 = %.2lf \n", val.x1, val.x2);
    return 0;
}
