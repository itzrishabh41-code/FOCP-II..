#include<iostream>
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
        cin >> "total" ;

        

