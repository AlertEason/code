#include <stdio.h>

int isleap(int year);
int isdate(int year, int month, int day);
int Yeardays(int year);
int totaldays(int year, int month, int day);

int main(){
    int start_year, start_month, start_day, end_year, end_month, end_day;
    scanf("%d-%d-%d", &start_year, &start_month, &start_day);
    scanf("%d-%d-%d", &end_year, &end_month, &end_day);
    if ((isdate(start_year, start_month, start_day) && isdate(end_year, end_month, end_day))==0){
        printf("Date error");
        return 0;
    }
    if (start_year == end_year){
       if (start_month == end_month){
          if (start_day > end_day) {
              printf("Date error");
              return 0;
          }
          printf("days=%d", end_day - start_day); 
       }
       else{
          printf("days=%d", totaldays(start_year, end_month, end_day) - totaldays(start_year, start_month, start_day));
       }
    }else if (end_year - start_year == 1)
    {
        printf("days=%d", Yeardays(start_year) - totaldays(start_year, start_month, start_day) + totaldays(end_year, end_month, end_day));
    }else if (end_year - start_year > 1){
        {
            int sum = 0;
            for (int i = start_year + 1; i < end_year; i++){
                sum += Yeardays(i);
            }
            sum += Yeardays(start_year) - totaldays(start_year, start_month, start_day) + totaldays(end_year, end_month, end_day);
            printf("days=%d", sum);
        }
    }
    return 0;
}

int isleap(int year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return 1;
    return 0;
}

int isdate(int year, int month, int day){
    if(month >= 1 && month <= 12){
        switch (month)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (day >= 1 && day <= 31) return 1;
            break;
        case 4: case 6: case 9: case 11:
            if (day >= 1 && day <= 30) return 1;
            break;
        case 2:
            if (isleap(year)){
                if (day >= 1 && day <= 29) return 1;
            }else{
                if (day >= 1 && day <= 28) return 1;
            }
            break;
        default:
            break;
        }
    }
    return 0;
}

int Yeardays(int year){
    if (isleap(year)) return 366;
    return 365;
}

int totaldays(int year, int month, int day){
    int  days = 0;
    switch (month)
    {
    case 12: days += 30; 
    case 11: days += 31; 
    case 10: days += 30; 
    case 9: days += 31; 
    case 8: days += 31; 
    case 7: days += 30; 
    case 6: days += 31; 
    case 5: days += 30; 
    case 4: days += 31; 
    case 3: 
        if (isleap(year)) days += 29;
        else days += 28;
        
    case 2: days += 31; 
    case 1: days += day; break;
    }
    return days;
}