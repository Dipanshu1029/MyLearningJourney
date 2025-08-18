#include <iostgream>
using namespace std ;
int main() {
    int exp ;
    cout << "Enter your years of experience : " ;
    cin >> exp ;
    if (exp >= 4) {
        cout << " you are eligible for the job " ;
    } else {
        cout << " you are not eligible for the job " ;
    }
}