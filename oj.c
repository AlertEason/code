#include"stdio.h"
#include"stdlib.h"
#define N 10
void input(int (*s)[N],int n);
int *linemax(int (*s)[N],int n);

int main()
{
    int i,n,a[N][N],*p; // 修正：p应为指针类型
    scanf("%d",&n);
    input(a,n);
    p=linemax(a,n);
    for(i=0;i<n;i++)
        printf("%5d",*(p+i)); // 修正：正确解引用指针访问元素
    free(p); // 修正：删除多余符号
    return 0;
}

void input(int (*s)[N],int n)
{
    int i,j,*p;
    for(i=0;i<n;i++,s++)
        for(p=*s,j=0;j<n;j++,p++)
            scanf("%d",p);
}

int *linemax(int (*s)[N],int n)
{
    int *p,*r,i,j,max;
    if((r=(int *)calloc(n,sizeof(int)))!=NULL)//动态分配内存构建存放最大值的数组
    {
        for(i=0;i<n;i++,s++)
        {
            max=**s;//将当前行的第一个元素的值赋给变量 max
            for(j=1;j<n;j++){
                if(*(*s+j)>max)
                    max=*(*s+j);
            }
            *(r+i)=max;
        }
        return r;
    }
    else
        return NULL;
}