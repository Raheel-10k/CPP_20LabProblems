#include <iostream>

using namespace std;

class Student {
private:
    string studentName;
    int* grades;
    int numGrades;

public:
    Student(const string& name, int num)
        : studentName(name), numGrades(num) {
        grades = new int[numGrades];
        cout << "Enter grades for " << studentName << ":\n";
        for (int i = 0; i < numGrades; ++i) {
            cout << "Grade " << i + 1 << ": ";
            cin >> grades[i];
        }
    }

    ~Student() {
        delete[] grades;
    }

    void displayDetails() const {
        cout << "Student Name: " << studentName << "\n";
        cout << "Grades: ";
        for (int i = 0; i < numGrades; ++i) {
            cout << grades[i] << " ";
        }
        cout << "\nAverage Grade: " << calculateAverage() << " (Letter Grade: " << getLetterGrade() << ")\n\n";
    }

private:
    float calculateAverage() const {
        if (numGrades == 0) {
            return 0.0;
        }

        int total = 0;
        for (int i = 0; i < numGrades; ++i) {
            total += grades[i];
        }

        return float(total) / numGrades;
    }

    char getLetterGrade() const {
        float average = calculateAverage();
        if (average >= 90) {
            return 'A';
        } else if (average >= 80) {
            return 'B';
        } else if (average >= 70) {
            return 'C';
        } else if (average >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student** students = new Student*[numStudents]; //array of pointer's pointer Student*[numStudents] creates a pointer data of type Student. students is a dynamic array which stores values of the array of pointers of numStudent

    for (int i = 0; i < numStudents; ++i) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        string name;
        int numGrades;

        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, name);

        cout << "Enter the number of grades: ";
        cin >> numGrades;

        students[i] = new Student(name, numGrades);
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; ++i) {
        students[i][0].displayDetails();
    }

    return 0;
}
