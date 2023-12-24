#include "iostream"
using namespace std;

void possibles(string &a, int s, int r) {
	if (s == r)
		cout << a << endl;
	else {
		for (int i = s; i <= r; i++) {
			swap(a[s], a[i]);
			possibles(a, s + 1, r);
			swap(a[s], a[i]);
		}
	}
}

int main() {
	string str;
	cout << "Enter a string: ";
	cin >> str;
	int n = str.size();
	cout << "All possible permutaions are shown below." << endl;
	possibles(str, 0, n - 1);
	return 0;
}
