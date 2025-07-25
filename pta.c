#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");
    
    return 0;
}

/* 你的代码将被嵌在这里 */

void CountOff(int n, int m, int out[]) {
    int check[MAXN] = {0};  // 标记数组，0表示未出列，1表示已出列
    int count = 0;          // 当前报数
    int index = 0;          // 当前位置
    int step = 0;           // 出列顺序
    
    while (step < n) {
        if (!check[index]) {
            count++;
            if (count == m) {
                out[index] = ++step;  // 记录出列顺序
                count = 0;            // 重置报数
                check[index] = 1;     // 标记为已出列
            }
        }
        index = (index + 1) % n;      // 循环遍历
    }
}