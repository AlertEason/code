#include <stdio.h>
int main(){
    int a, n, sum = 0,temp = 0;
    scanf("%d,%d", &a, &n);
    
    for(int i = 0; i < n; i++){
        temp = temp * 10 + a;
        sum += temp;
    }
    printf("s=%d", sum);
    return 0;
}
