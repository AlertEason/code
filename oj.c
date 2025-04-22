#include"stdio.h"
int main()
{ int sc[30]={0},s,i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{ scanf("%d",&s);
if(s>=70&&s<100) 
sc[s-70]++; 
}
while(1){
    for(i = 29;i >= 0;i--)
    {
        while (sc[i]!=0)
        {
            printf(" %d",i+70);
            sc[i]--;
        }

    }
    break;
}
return 0;
}