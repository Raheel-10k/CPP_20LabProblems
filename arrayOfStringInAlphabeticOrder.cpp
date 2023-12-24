#include <iostream>
#include <string>

using namespace std;

int main() {
    int size;
    cout<<"Enter Size of Array: ";
    cin>>size;
    string strings[size];
    cout << "Enter " << size << " strings:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "String " << i + 1 << ": ";
        cin >> strings[i];
    }
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (strings[j] > strings[j + 1]) {
                string temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    cout << "\nStrings in alphabetical order:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << strings[i] << endl;
    }
    return 0;
}
