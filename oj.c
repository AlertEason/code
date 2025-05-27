#include <stdio.h>
#include <string.h>
#define MAX 1000

int main(void)
{
    char str[MAX] = "";
    fgets(str, sizeof(str), stdin);
    char n;
    scanf("%c", &n);
    int i = 0;
    while(1){
        if(str[i] == '\0'){
            break;
        }
        if (str[i] != n){
            printf("%c", str[i]);
        }
        i++;
        
    }
    return 0;
}  