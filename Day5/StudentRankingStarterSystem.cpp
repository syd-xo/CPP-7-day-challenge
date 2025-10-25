#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

// Define a structure to store student data
struct Student {
    string name;
    double grade;
};

// Function to display all students
void displayStudents(const vector<Student>& students) {
    if (students.empty()) {
        cout << "No student records available.\n";
        return;
    }

    cout << fixed << setprecision(2);
    cout << "\n--- Student List ---\n";
    for (const auto& s : students) {
        cout << s.name << " - " << s.grade << endl;
    }
}

// Function to sort students by grade (descending)
void sortStudents(vector<Student>& students) {
    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.grade > b.grade; // highest first
    });
    cout << "Students sorted by grade (highest to lowest).\n";
}

// Function to search for a student by name
void searchStudent(const vector<Student>& students, const string& targetName) {
    bool found = false;
    for (const auto& s : students) {
        if (s.name == targetName) {
            cout << "Record found: " << s.name << " - " << s.grade << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "No student found with the name \"" << targetName << "\".\n";
}

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== Student Ranking & Search System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Sort by Grade\n";
        cout << "4. Search by Name\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter student name: ";
            cin >> s.name;
            cout << "Enter grade (0–100): ";
            cin >> s.grade;

            if (s.grade < 0 || s.grade > 100) {
                cout << "Invalid grade. Try again.\n";
                continue;
            }

            students.push_back(s);
            cout << "Student added successfully!\n";
        }

        else if (choice == 2) {
            displayStudents(students);
        }

        else if (choice == 3) {
            sortStudents(students);
            displayStudents(students);
        }

        else if (choice == 4) {
            string name;
            cout << "Enter name to search: ";
            cin >> name;
            searchStudent(students, name);
        }

        else if (choice == 5) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
