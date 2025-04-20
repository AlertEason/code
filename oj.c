#include <stdio.h>
#include<string.h>

int main() {
    int n, m;
    scanf("%d,%d", &n, &m);
    int a[n];
    memset(a, 0, sizeof(a));
    int count = n, counting = 0, i = 0;
    while(count > m){
        if(a[i] == 0)counting++;
        if(counting == m){
            a[i] = 1;
            counting = 0;
            count--;
        }
        i++;
        if (i > n) i = 0;

        
    }

    for(int i = 0; i < n; i++){
        if(!a[i]){
            printf("%5d ", i + 1);
        }
    }

    
}