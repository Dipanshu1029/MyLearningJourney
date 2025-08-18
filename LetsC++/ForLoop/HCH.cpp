#include <iostream>
using namespace std;

int main() {
    int a ;
    int b ;
    int i ;
    int hcf = 1 ;
    printf("Enter the value of a : ") ;
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    cout << "HCF of " << a << " and " << b << " is " << hcf << endl;

}