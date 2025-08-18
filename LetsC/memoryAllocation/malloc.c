#include <stdio.h>
#include <stdlib.h>

int main(){
    int * ptr ; 
    ptr = malloc(5 * sizeof(int));
    printf("%p" , ptr) ;

    int * ptr2 = calloc(5 , sizeof(int)) ; 
    printf("\n%p" , ptr2) ;

    *ptr = 1 ; 
    ptr[1] = 2 ;
    ptr[2] = 3 ;
    ptr[3] = 4 ;
    ptr[4] = 5 ;
    for (int i = 0 ; i < 5 ; i++){
        printf("\n%d" , ptr[i]) ;
    }
    free(ptr); // Freeing allocated memory
    free(ptr2); // Freeing allocated memory
    // Allocating memory for 5 integers
}