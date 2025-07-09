#include <stdio.h>

int  main(){
    printf("enter num : ");
    int num ;
    scanf("%d" , &num);
    int sum = 0 ;
    while (num>0) {
        int last_digit = num%10; 
        num = num/10 ;
        sum = sum + last_digit ;
}
    printf("%d" , sum) ;

}