#include <stdio.h>
#include <math.h>

int length(int n); 
int Daffodil(int n);


int main(){
    int a, n;
    scanf("%d,%d", &a, &n);
    for (int i = a; i <= n; i++){
        if (Daffodil(i)){
            printf("%d\n", i);
        }
    }
}


int length(int n){
    int len = 0;
    while(n){
        len++;
        n /= 10;
    }
    return len;
}

int Daffodil(int n){
    int sum = 0, len = length(n),origin_n = n;
    if (len == 1){
        return 1;
    }
    else{
        while (n){
        sum += (int)(pow(n % 10, len)+0.5);
        n /= 10;
    }
}
    if (sum == origin_n)
        return 1;
    return 0;
}