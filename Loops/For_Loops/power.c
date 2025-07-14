#include <stdio.h>

int main() {
    int base = 1 ;
    int exponent = 1 ;
    int result = 1 ;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i=1 ; i<= exponent; i++) {
        result *= base; 
    
    }
    printf("%d", result);

    return 0;



}