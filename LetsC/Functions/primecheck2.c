#include <stdio.h>
int primecheck(int n) {
    int isprime = 1;
    for (int i = 2; i<= n-1 ; i++) {
        if (n % i == 0) {
            isprime = 0 ; 
            break;
            
        }
    }
    return isprime ;
    
}
int main() {
    int n ; 
    printf("Enter a number: ");
    scanf("%d" , &n) ;
printf("The nummber is prime: %d\n" ,primecheck(n));


}