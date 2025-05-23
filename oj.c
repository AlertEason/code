#include <stdio.h>
#include <string.h>
#define N 10

int wc[N] = {0};

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        int num = nums[i];
        while(num != 0) {
            wc[num % 10]++;
            num /= 10;
        }
    }
    int max = wc[0];
    for(int i = 0; i < N; i++){
        if(wc[i] > max){
            max = wc[i];
        }
    }
    for(int i = 0; i < N; i++){
        if(wc[i] == max){
            printf("%d:%d\n", i, wc[i]);
            
        }
    }

}