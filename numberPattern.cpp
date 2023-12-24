#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < i * 2; ++j) {
            cout << j;
        }
        for (int j = i * 2 - 2; j >= i; --j) {
            cout << j;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; --i) {
        for (int j = i; j < i * 2; ++j) {
            cout << j;
        }
        for (int j = i * 2 - 2; j >= i; --j) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
