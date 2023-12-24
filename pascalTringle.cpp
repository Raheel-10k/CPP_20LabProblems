#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        int coefficient = 1;
        for (int j = 0; j <= i; j++) {
            cout << coefficient << " ";
            coefficient = coefficient * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
