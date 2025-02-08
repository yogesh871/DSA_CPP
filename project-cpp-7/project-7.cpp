#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


template <typename T>
class StudentInfo {
private:
    T id;
    string name;
    
public:
    StudentInfo(T id, string name) : id(id), name(name) {}

    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    T getId() const {
        return id;
    }
};

class StudentDetail {
private:
    vector<StudentInfo<int>> students;

public:
    void addStudent(int id, string name) {
        students.push_back(StudentInfo<int>(id, name));
        cout << "Student added successfully!" << endl;
    }

    void displayStudents() {
        if (students.empty()) {
            cout << "No students found." << endl;
            return;
        }
        for (const auto &student : students) {
            student.display();
        }
    }

    void removeStudentById(int id) {
        auto it = find_if(students.begin(), students.end(), [id](const StudentInfo<int> &student) {
            return student.getId() == id;
        });

        if (it != students.end()) {
            students.erase(it);
            cout << "Student removed successfully!" << endl;;
        } else {
            cout << "Student with ID " << id << " not found." << endl;;
        }
    }

    void searchStudentById(int id) {
        auto it = find_if(students.begin(), students.end(), [id](const StudentInfo<int> &student) {
            return student.getId() == id;
        });

        if (it != students.end()) {
            cout << "Student found: ";
            it->display();
        } else {
            cout << "Student with ID " << id << " not found." << endl;
        }
    }
};

int main() {
    StudentDetail sm;
    int choice, id;
    string name;

    do {
        cout << endl << " Management System:" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                sm.addStudent(id, name);
                break;
            case 2:
                sm.displayStudents();
                break;
            case 3:
                cout << "Enter ID to remove: ";
                cin >> id;
                sm.removeStudentById(id);
                break;
            case 4:
                cout << "Enter ID to search: ";
                cin >> id;
                sm.searchStudentById(id);
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }while (choice != 0);
    

    return 0;
}