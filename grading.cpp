#include <iostream>
using namespace std;

int main() {
    double sub1, sub2, sub3, sub4, sub5;
    cout << "Enter score for Subject 1: ";
    cin >> sub1;
    cout << "Enter score for Subject 2: ";
    cin >> sub2;
    cout << "Enter score for Subject 3: ";
    cin >> sub3;
    cout << "Enter score for Subject 4: ";
    cin >> sub4;
    cout << "Enter score for Subject 5: ";
    cin >> sub5;

    double average_score =  (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    char grade;
    if (average_score >= 90) {
        grade = 'A';
    } else if (average_score >= 80) {
        grade = 'B';
    } else if (average_score >= 70) {
        grade = 'C';
    } else if (average_score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Average Score: " << average_score << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}
