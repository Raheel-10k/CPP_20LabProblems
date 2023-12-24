#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int array[size];
    cout << "Enter " << size << " integers for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }
    bool isSorted = true;
    for (int i = 0; i < size - 1; ++i) {
        if (array[i] > array[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }
    return 0;
}
