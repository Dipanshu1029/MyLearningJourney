#include <stdio.h>
int factorial(int n) {
 int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n , int r) {
    int bino = factorial(n) / (factorial(r) * factorial(n - r)) ;
    return bino;


}

int main() {
    int n = 15 ; 
    int r = 6 ;
    printf("Enter values for n and r: ");
    scanf("%d %d", &n, &r);
    printf("nCr of %d and %d is: %d\n", n, r, nCr(n, r));
}