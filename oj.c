#include <stdio.h>
#include <string.h>
#define N 100

int isalpha(char ch) //判断ch是否为字母，ch为小写字母返回1，大写字母返回-1，其他字符则返回0
{
    if(ch>='a'&&ch<='z')
        return 1;
    else if(ch>='A'&&ch<='Z')
        return -1;
    else
        return 0;
}

int extract(char *s,char words[][80]) //从字符串s中提取单词，并存放于words中，返回提取的单词个数
{
    int i,j,n,flag;
    char ch;
    i=0,n=-1,flag=0;
    while(ch=s[i])
    {
        if(isalpha(ch))
        {
            if(flag==0) //新单词开始
            {
                
            }
            else
                words[n][++j]=ch;
        }
        else if(flag) //当前单词提取结束
        {
            words[n][j]='\0';
            flag=0;
        }
        i++;
    }
    return n+1;
}

void strsort(char str[][80],int n) //采用冒泡算法对str中的n个字符串按升序排序
{
    int i,j;
    char t[80];
    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
            if(strcmp(str[j],str[j+1])>0)
            {
                strcpy(t,str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1],t);
            }
}

int main()
{
    char line[81],words[N][80];
    int i,n;
    gets(line);
    n=extract(line,words);//提取单词
    strsort(words,n); //单词排序
    for(i=0;i<n;i++)
        puts(words[i]);
    return 0;
}