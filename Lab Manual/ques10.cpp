#include <iostream>
using namespace std;
class leap
{
int N;
public:
void input()
{
cout << "year? ";
cin >> N;
}
void divisible()
{
if (N % 4==0)
 {
cout << "leap year";
}
else
cout << "not leap year";
}

};
int main()
{
    leap a;
    a.input();
    a.divisible();
    return 0;
}



