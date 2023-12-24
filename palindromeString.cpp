//This code checks if a given string is palindrome or not.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    bool palindrome = false;
    cout << "Enter a string: ";
    getline(cin, str1); //Takes line input

    for(int i = 0; i < str1.length()/2; i++) {
        palindrome = false;
        if(str1[i]  == str1[str1.length() - (i+1)]) {
            palindrome = true;
        }
        else {
            palindrome = false;
        }
    }

    if(palindrome)
        cout<<"\""<<str1<<"\" is a palindrome string"<<endl;
    else
        cout<<"\""<<str1<<"\" is a not palindrome string"<<endl;
    
    return 0;
}