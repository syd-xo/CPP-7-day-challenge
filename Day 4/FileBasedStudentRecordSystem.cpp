#include <iostream>
#include <vetor>
#include <fstream>
#include <iomanip>

using namespace std;

// Define a structure to store student data
struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Save to File" << endl;
        cout << "4. Load from File" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter student name: ";
            cin >> s.name;
            cout << "Enter grade (0-100): ";
            cin >> s.grade;

            if (s.grade < 0 || s.grade > 100) {
                cout << "Invalid grade. Try again." << endl;
                continue;
            }

            students.push_back(s);
            cout << "Student added successfully!" << endl;
        }

        else if (choice == 2) {
            if (students.empty()) {
                cout << "No students available." << endl;
            } else {
                cout << fixed << setprecision(2);
                cout << "Student Records: " << endl;
                for (const auto& s : students) {
                    cout << s.name << " - " << s.grade << endl;
                }
            }
        }

        else if (choice == 3) {
            ofstream outFile("students.txt");
            if (!outFile) {
                cout << "Error opening file for writing." << endl;
                continue;
            }
            for (const auto& s : students) {
                outFile << s.name << " " << s.grade << endl;
            }
            outFile.close();
            cout << "Data saved to students.txt!" << endl;
        }

        else if (choice == 4) {
            ifstream inFile("students.txt");
            if (!inFile) {
                cout << "Error: File not found." << endl;
                continue;
            }

            students.clear();
            Student s;
            while (inFile >> s.name >> s.grade) {
                students.push_back(s);
            }
            inFile.close();
            count << "Data loaded from file!" << endl;
        }

        else if (choice == 5) {
            count << "Exiting program..." << end;
        }

        else {
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}