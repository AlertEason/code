#include <stdio.h>
#include <string.h>
#define N 20

int main(){
    char str[N][2];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        str[i][1] = strlen(scanf("%s", str[i][0]));
    }
    for(int i = 0; i < n - 1; i++){
        int flag = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(str[j][1] > str[j + 1][1]){
                char temp[2];
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
                flag = 1;
            }

        }
        if(flag == 0){
            break;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%s\n", str[i][0]);
    }

}