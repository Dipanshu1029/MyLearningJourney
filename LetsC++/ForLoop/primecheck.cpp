#include <iostream>
using namespace std;
int main() {
    int num ;
    cout << "Enter a number.. : " ;
    cin >> num ;
    bool isprime = true ;
    for (int i = 2 ; i<= num/2 ; i++) {
        if (num % i == 0) {
            isprime = false ;
            break ;
        }
    }

    if (isprime && num > 1) {
        cout << "The number is prime" ;
    } else {
        cout << "The number is not prime" ;
    }
}