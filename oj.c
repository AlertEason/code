#include <stdio.h>
#include <stdlib.h>

struct Time
{ int hour;
int minute;
int second;
};
int main()
{ int n;
struct Time t1;
char temp[10];
scanf("%9s",temp);
sscanf(temp,"%d:%d:%d",&t1.hour,&t1.minute,&t1.second);
scanf("%d",&n);
int total_seconds = t1.hour * 3600 + t1.minute * 60 + t1.second;
total_seconds += n;
total_seconds %= 86400;
t1.hour = total_seconds / 3600;
t1.minute = (total_seconds % 3600) / 60;
t1.second = total_seconds % 60;
printf("%02d:%02d:%02d\n",t1.hour,t1.minute,t1.second);
return 0;
}