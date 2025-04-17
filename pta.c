#include <stdio.h>

int GCD (int a, int b);

void main(){
    int num_1, num_2,temp;
    scanf("%d,%d",&num_1,&num_2);
    if (num_1 > num_2) {
        temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }
    printf("gys=%d,gbs=%d",GCD(num_1,num_2),((num_1 * num_2)/GCD(num_1,num_2)));
}

int GCD (int a, int b){
    int r = a % b;
    while (r > 0){
        a = b;
        b = r;
        r = a % b;        
    }
    return b;
}

