#include <stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
int isLeapYear(int year){
    if(year%4==0)
        return 1;
    return 0;
}

int daysInMonth(int month, int year){
    if(month==2){
        if(isLeapYear(year))
            return 29;
        else
            return 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    return 31;
}

int dateToDays(struct Date d){
    int days=0;
    int i;
    for(i=1; i<d.year;i++){
        if(isLeapYear(i))
            days+=366;
        else
            days+=365;
    }
    for(i=1; i<d.month;i++){
        days+=daysInMonth(i, d.year);
    }
    days+=d.day;
    return days;
}

int main(){
    struct Date d1, d2;
    int days1, days2, difference;
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    days1=dateToDays(d1);
    days2=dateToDays(d2);
    difference=days1-days2;
    if(difference<0)
    difference = -difference;
    printf("Difference between the two dates = %d days\n", difference);

    return 0;



}
