#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void getStudent() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};


class Marks : public Student {
public:
    int totalMarks;

    void getMarks() {
        cout << "Enter total marks: ";
        cin >> totalMarks;
    }
};


class Friends {
public:
    string f1, f2;

    void getFriends() {
        cout << "Enter first friend name: ";
        cin >> f1;
        cout << "Enter second friend name: ";
        cin >> f2;
    }
};


class StudentPerformance : public Marks, public Friends {
public:
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Marks: " << totalMarks << endl;

        cout << "\n--- Friends ---" << endl;
        cout << f1 << " and " << f2 << endl;

        cout << "\n--- Performance ---" << endl;
        if (totalMarks >= 80)
            cout << "Excellent performance 🔥" << endl;
        else if (totalMarks >= 50)
            cout << "Average performance 👍" << endl;
        else
            cout << "Needs improvement 💀" << endl;
    }
};

int main() {
    StudentPerformance s;

    s.getStudent();
    s.getMarks();
    s.getFriends();

    s.display();

    return 0;
}