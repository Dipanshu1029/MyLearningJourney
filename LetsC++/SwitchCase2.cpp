#include <iostream>
using namespace std ;
int main () {
    int num ;
    cout << "Enter a number.. : " ;
    cin >> num ;
    switch (num%2) {
        case 0 :
        cout << " the number is even" ;
        break ;
        case 1 :
        cout << " the number is odd" ;
        break ;
    }
}