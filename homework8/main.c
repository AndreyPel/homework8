#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    double x;

    printf("¬ведите натуральное n: ");
    scanf("%d", &n);

    printf("¬ведите действительное x: ");
    scanf("%lf", &x);

    double sin_x = sin(x);
    double power = sin_x;    
    double sum = 0.0;        

    for (int k = 1; k <= n; k++)
    {
        sum += power;           
        power *= sin_x;         
    }

    printf("–езультат: sin(x) + sin^2(x) + ... + sin^%d(x) = %lf\n", n, sum);

    return 0;
}