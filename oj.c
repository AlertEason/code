#include <stdio.h>
double power(double x, int n)
{
    if (n == 0)
        return 1;
    if (n > 0)
        return x * power(x, n - 1);
    else
        return 1 / power(x, -n);
}
int main()
{
    double x, a;
    int n;
    scanf("%lf,%d", &x, &n);
    a = power(x, n);
    printf("%g", a);
    return 0;
}