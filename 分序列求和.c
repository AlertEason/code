#include <stdio.h>

int fibonacci(int n){
    if (n == 1 || n == 2) {
        return 1;
    }
    int a = 1, b = 1, c;
    for(int i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    int n;
    scanf("%d", &n);
    double sum = 0, temp;

    for (int i =1; i <= n; i++){
        temp = (double)fibonacci(i+2) / fibonacci(i+1);
        sum += temp;
    }

    printf("s=%.2lf", sum);
    return 0;
}