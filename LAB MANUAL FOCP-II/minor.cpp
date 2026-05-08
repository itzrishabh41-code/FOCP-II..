#include <iostream>
using namespace std;
class Relation
{
public:
int multiply(int a, int b)
{
cout << "You are a friend" << endl;
return a * b;
}
double multiply(double a, double b)
{
cout << "You are a student" << endl;
return a * b;
}
double multiply(int a, double b)
{
cout << "You are a sibling" << endl;
return a * b;
}int
double multiply(double a, int b)
{
cout << "You are a cousin" << endl;
return a * b;
}
};
int main()
{
Relation obj;
cout << obj.multiply(2, 3) << endl;
cout << obj.multiply(2.5, 3.5) << endl;
cout << obj.multiply(4, 2.5) << endl;
cout << obj.multiply(3.5, 4) << endl;
return 0;
}
