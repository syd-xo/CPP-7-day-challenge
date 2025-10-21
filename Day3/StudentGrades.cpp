#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Define a structure to store student data
struct Student {
    string name;
    double grade;
};

int main() {
    int numStudents;
    vector<Student> students;
    double total = 0.0;
    double highest = 0.0;
    double lowest = 100.0;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Input validation
    if (numStudents <=0){
        cout << "Invalid number of students" << endl;
        return 1;
    }

    // Input student names and grades
    for (int i = 0; i < numStudents; ++i) {
        Student s;
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> s.name;
        cout << "Enter grade of " << s.name << ": ";
        cin >> s.grade;

        // Validate grade input
        if (s.grade < 0 || s.grade > 100) {
            cout << "Invalid grade entered. Please enter a grade between 0 and 100." << endl;
            --i; //  repeat this iteration
            continue;
        }

        students.push_back(s);
        total += s.grade;
        if (s.grade > highest) highest = s.grade;
        if (s.grade < lowest) lowest = s.grade;
    }

    // Calculate average grade
    double average = total / numStudents;
    cout << fixed << setprecision(2);
    cout << "Average grade: " << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;

    return 0;
}