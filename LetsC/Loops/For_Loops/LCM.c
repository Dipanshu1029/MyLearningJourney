#include <stdio.h>
int main() {
     int a ;
    int b ;
    int i ;
    int lcm ;
    int max, min;
printf("Enter the value of a : ") ;
    scanf("%d" , &a) ;
    printf("Enter the value of b : ") ;
    scanf("%d" , &b) ;
    
    if (a>b) {
    max = a;
    min = b;

} else {
    max = b;
    min = a;
}    
   printf("%d %d" , max,min) ;
   
    for (i = max; i<=a*b; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
            
        }
          printf("LCM of %d and %d is %d\n", a, b, lcm);
    }