#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s )
{
    int len = 0;
    while(t[len] != '\0') len++;
    if(len < m)
    {
        *s = '\0';
        return;
    }
    int i = m - 1;
    while(i < len)
    {
        s[i - m + 1] = t[i];
        i++;
    }
    s[i - m + 1] = '\0';
}