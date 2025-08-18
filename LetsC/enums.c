#include <stdio.h>
enum Months {
    January ,
    February,
    March,
    April,
    May,
    June = 10,
    July,
    August,
    September,
    October,
    November,
    December
};

int main(){
    printf("The first month is %d\n", January);
    printf("The eighth month is %d\n", August);
}

