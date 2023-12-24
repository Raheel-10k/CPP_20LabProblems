//This code finds the largest number amongst three numbers using a nested if-else statement

#include "iostream"
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a>b) {
        if(a>c){
            cout << a << " is the largest number" << endl;
        }
        else {
            cout << c << " is the largest number" << endl;
        }
    }
    else {
        if(b>c) {
            cout << b << " is the largest number" << endl;
        }
        else {
            cout << c << " is the largest number" << endl;
        }
    }
}