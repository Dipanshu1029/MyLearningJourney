#include <stdio.h>

int main() {
    int n = 0;
    printf("Enter the value of n : ") ;
    scanf("%d" , &n) ;
        for (int i = 0; i<=n ; i++) {
            //spaces loop
            for (int j = 0; j<=n-i; j++){
                printf("  ") ;
            } 
            //stars loop
            for (int z = 0; z<=i; z++) {
                printf("* ") ;
                
            }
            printf("\n");
        }  

    }
        