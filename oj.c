#include <stdio.h>

struct tablet
{
    char name[20];
    int price;
};

int main(void){
    int n;
    scanf("%d",&n);
    struct tablet students[1000];
    int total = 0;
    for (int i = 0; i < n; i++){
        scanf("%s %d",students[i].name,&students[i].price);
        total += students[i].price;
    }
    double average = (double)total / n;
    
    for(int i = 0; i < n; i++){
        if (students[i].price > average){
            printf("%s,%d\n",students[i].name,students[i].price);
        }
    }
    return 0;

}