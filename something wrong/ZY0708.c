#include <stdio.h>
#include <string.h>
#define MAXLINE 80

int main(void)
{
    int i, k, number;
    char str[MAXLINE], hexad[MAXLINE];
    i = 0;
    while((str[i]=getchar()) != '#'){
        i++;
    }
    str[i] = '\0';
    i = 0; k = 0;
    while(str[i] != '\0'){
        if((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f')||(str[i] >= 'A' && str[i] <= 'F')||(str[i] == '-')){
            hexad[k] = str[i];
            k++;
        }
        i++;
    }
    hexad[k] = '\0';
    for(i = 0; hexad[i] != '\0'; i++){
        putchar(hexad[i]);
    }
    printf(":");
    number = 0;
    int flag = 0;
    for(i = 0; hexad[i] != '\0'; i++){
        if(hexad[i] >= '0' && hexad[i] <= '9'){
            number = number * 16 + (hexad[i] - '0');
        }
        else if(hexad[i] >= 'a' && hexad[i] <= 'f'){
            number = number * 16 + (hexad[i] - 'a' + 10);
        }
        else if(hexad[i] >= 'A' && hexad[i] <= 'F'){
            number = number * 16 + (hexad[i] - 'A' + 10);
        }
        else if(hexad[i] == '-'){
            flag = 1;
        }
    }
    if(flag == 1){
        number = -number;
    }
    printf("%d\n", number);
    return 0;
}