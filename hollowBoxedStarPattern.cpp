#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the hollow box: ";
    cin >> size;
    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= size; ++j) {
            if (i == 1 || i == size || j == 1 || j == size) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
