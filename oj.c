#include <stdio.h>
int ack(int m,int n)
{
    if(m==0) return n+1;
    else if(n==0&&m>0) return ack(m-1,1);
    else if (n>0&&m>0) return ack(m-1,ack(m,n-1));
    
}
int main()
{ int m,n,s;
scanf("%d,%d",&m,&n);
s=ack(m,n);
printf("%d",s);
return 0;
}