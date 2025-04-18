#include <stdio.h>
int main()
{ int a[20][20],n,i,j,flag,col;
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
{ col=0;
for(j=1;j<n;j++) 
if(a[i][col]<a[i][j])
col=j;
flag=1; 
for(j=0;j<n&&flag;j++)
{
    if(a[j][col]<a[i][col])
    {
        flag=0;
    }
}
if(flag)
{ printf("[%d,%d]=%d\n",i,col,a[i][col]);
break;
}
}
if(flag==0)
printf("no");
return 0;
}