#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000] = "";
    fgets(str, sizeof(str), stdin);
    int i = 0;
    str[strlen(str) - 1] = '\0'; 
    int result[4] = {0}; 
    while(1){
        if(str[i] == '\0'){
            break;
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            result[0]++;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            result[1]++;
        }else if(str[i] >= '0' && str[i] <= '9'){
            result[2]++;
        }else{
            result[3]++;
        }
        i++;
    }
    for (int i = 0; i < 3; i++){
        printf("%d,", result[i]);
    }
    printf("%d", result[3]);
    return 0;
}