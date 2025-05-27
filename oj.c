#include <stdio.h>
#include <string.h>
#define MAX 1000

int main(void)
{
    char str[MAX] = "";
    fgets(str, sizeof(str), stdin);
    int n;
    scanf("%d", &n);
    int i = n;
    while(1){
        if(str[i] == '\0'){
            break;
        }
        printf("%c", str[i]);
        i++;
        
    }
    return 0;
}  