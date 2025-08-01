#include <STDIO.h>
int primecCheck(int n) {
    int isprime = 1 ;
    for (int i = 2 ; i*i <= n ; i++) {
        if (n % i == 0) {
            isprime = 0;
            
            
        }
    }
    return isprime; 
}

void printprime(int n) {
    for (int i = 2 ; i<=n ; i++) {
        if (primecCheck(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d are: ", n);
    printprime(n);
    printf("\n");
    return 0;
}
