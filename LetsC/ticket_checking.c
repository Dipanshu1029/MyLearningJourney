#include <stdio.h>
int main(){
int age ;
printf("enter your age : ");
scanf("%d" , &age);
if (age <=18) {
    printf("no ticket");

} else if (age>=18 && age<=60) {
    printf("100 ruppes ticket");

} else  {
    printf("no ticket");
} 
}
    

