#include <stdio.h>
#include <string.h>
#define N 20

int main() {
    char str[N][80];  // 增大字符串长度限制
    int len[N];       // 存储每个字符串的长度
    int n;
    
    scanf("%d", &n);
    getchar();  // 消耗可能残留的换行符
    
    for (int i = 0; i < n; i++) {
        scanf("%79s", str[i]);      // 读取字符串，限制长度防止溢出
        len[i] = strlen(str[i]);  // 存储长度
    }
    
    // 冒泡排序（按字符串长度）
    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (len[j] > len[j + 1]) {  // 比较长度
                // 交换字符串
                char temp[80];
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
                
                // 交换长度记录
                int t = len[j];
                len[j] = len[j + 1];
                len[j + 1] = t;
                
                flag = 1;
            }
        }
        if (flag == 0) break;  // 提前结束
    }
    
    // 输出排序后的字符串
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);  // 正确输出字符串
    }

}