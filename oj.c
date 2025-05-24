#include <stdio.h>

int main(void)
{
    double n;
    scanf("%lf",&n);
    printf("%d\n", (int)n);
    printf("%g\n", n - (int)n);
}