#include <stdio.h>

int main() {
    float x, y;
    scanf("%f", &x);
    if (x<=100)
    {
        y = x*0.51;
    }else{
        y = x*0.65;
    };
    printf("%.2f\n", y);
    return 0;

}
