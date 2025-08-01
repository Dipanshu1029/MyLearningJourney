#include <stdio.h>
int main(){
    int num ;
    printf("Enter a number: ");
    scanf("%d", &num);
    int is_prime = 1;
    int i = 2;
    while (i*i<=num) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
        i++;
    }
    if (is_prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}
