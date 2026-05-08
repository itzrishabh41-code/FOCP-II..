#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;

    fstream fout;
    fout.open("student.txt");

    cout << "Enter name & age: ";
    cin >> name >> age;

    fout << name << endl;
    fout << age;

    fout.close();

    fstream fin;
    fin.open("student.txt");

    fin >> name;
    fin >> age;

    cout << name;
    cout << age;

    fin.close();

    return 0;
}