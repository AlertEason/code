#include <stdio.h>
#include <string.h>

void unzip(char *s1, char *s2) {
    char *p = s1, *q = s2;
    int flag = 0, n;
    while (*p) {
        if (*p >= '0' && *p <= '9') {
           if(!flag){
            flag = 1;
            n = *p - '0';
            }
            else{
            n = n * 10 + (*p - '0');
            }
            p++;            
        }else if((*p >= 'A'&& *p <= 'Z')||(*p >= 'a' && *p <= 'z')){
            if(flag){
                for(int i = 0; i < n; i++){
                    *q++ = *p;
                }
                flag = 0;
            }else{
                *q++ = *p;
            }
            p++;
            
        }
    }
    *q = '\0'; // 添加字符串结束符
}

int main() {
    char s1[80], s2[1000];
    gets(s1); // 注意：gets存在缓冲区溢出风险，建议使用fgets
    unzip(s1, s2);
    puts(s2);
    return 0;
}
