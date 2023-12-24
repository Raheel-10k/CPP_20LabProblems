//This code calculates the power of a number using a loop.

#include "iostream"
using namespace std;

int main() {
    float num, result;
    float pow, copy;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter power on the number: ";
    cin >> pow;
    copy = 1;
    result=1;
    if(pow >0){
        for(int i=0; i<pow; i++) {
            result *= num;
        }
    }
    else if(pow < 0){
        // for(int i=pow+1; i<0; i++) {
        //     copy *=num;
            
        // }
        // result = 1/copy;

        for(int i=pow; i<0; i++) {
            copy *= num;
        }
        result = 1/copy;
    }

    cout << result << endl;

    return 0;
}