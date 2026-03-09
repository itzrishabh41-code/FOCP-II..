#include <iostream>
using namespace std;
class tags
{
int N;
public:
void input()
{
cout << "ENTER ID : ";
cin >> N;
}
void divisible()
{
if (N % 3 == 0 && N % 5 == 0)
 {
cout << "Both Tag";
}
else if (N % 3 == 0)
{
cout << "Buzz";
}
else if (N % 5 == 0)
{
cout << "Fuzz";
}
else
{
cout << "No Tag";
}
}
};
int main()
{
    tags a;
    a.input();
    a.divisible();
    return 0;
}
