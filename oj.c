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
scanf("%d:%d:%d", &t1.hour, &t1.minute, &t1.second);
scanf("%d", &n);
t1.hour += n / 3600;
n = n % 3600;
t1.minute += n / 60;
n = n % 60;
t1.second += n;
t1.minute += t1.second / 60;
t1.second = t1.second % 60;
t1.hour += t1.minute / 60;
t1.minute = t1.minute % 60;
t1.hour = t1.hour % 24;
printf("%02d:%02d:%02d", t1.hour, t1.minute, t1.second);
return 0;
}