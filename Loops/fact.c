#include <stdio.h>
int main(){
    int fact = 1;
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        // fact = fact * i 
        fact *= i ; 
}
printf("Factorial is %d:" , fact);
return 0 ; 
}