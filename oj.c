#include <stdio.h>
double f(double x, int n)
{
    if (n == 1)
        return x;
    else if (n > 0)
    {
        return x + (-x) * f(x, n - 1);
    }
}
int main()
{
    double x, a;
    int n;
    scanf("%lf,%d", &x, &n);
    a = f(x, n);
    printf("%g", a);
    return 0;
}