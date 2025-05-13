#include "stdio.h"
#include "string.h"
int findsubstring(char *s,char *sub)
{
    int len_s = strlen(s);
    int len_sub = strlen(sub);
    for(int i = 0; i <= len_s - len_sub; i++)
    {
        int j;
        for(j = 0; j < len_sub; j++)
        {
            if(s[i+j] != sub[j])
                break;
        }
        if(j == len_sub)
            return i;
    }
    return -1;
}

int main()
{ char line[80],substr[10];
int index;
gets(line);
gets(substr);
index=findsubstring(line,substr);
if(index>=0)
printf("yes",index);
else
printf("no");
return 0;
}