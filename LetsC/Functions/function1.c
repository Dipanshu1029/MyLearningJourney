#include <stdio.h>
void printname() {
    printf("My name is krinshna\n") ;

}

int printNum(){
    return 5 ;
}
int main(){
    printname();
    int num = printNum()  ;
    printf("The number is: %d\n", num);
    return 0;
}

