#include<iostream>
using namespace std;
class abc
{
    public:
    static int a;
    void display()
    {
        cout<<"variable is:"<<a;

    }
}
  int main()
{
    abc  x1;
    abc  x2;
    x1 a = 10;
    x2 a = 20;
    x1 display();
x2 display();
}