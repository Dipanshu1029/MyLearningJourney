#include <stdio.h>

int main() {
    printf("enter num : ");
    int num;
    scanf("%d", &num);
    int sum = 0;
    while (num > 0) {
        int last_digit = num % 10;
        sum = sum + last_digit;
        num = num / 10;
    }
    printf("Sum of all digits: %d\n", sum);
    return 0;
}