#include <iostream>
using namespace std;

class Addition
{
public:
int add(int one, int two, int three)
{
 return one + two + three;
}

int add(int one, int two)
{
return one + two;
}

float add(float one, int two)
{
return one + two;
}

float add(int one, float two, float three)
{
return one + two + three;
}

float add(float one, float two, float three)
{
return one + two + three;
}
};

int main()
{
Addition obj;

cout << "Sum of 3 integers: " << obj.add(2, 3, 4) << endl;
cout << "Sum of 2 integers: " << obj.add(5, 6) << endl;
cout << "Sum of 1 decimal and 1 integer: " << obj.add(3.5f, 2) << endl;
cout << "Sum of 1 integer and 2 decimals: " << obj.add(3, 4.5f, 2.5f) << endl;
cout << "Sum of 3 decimals: " << obj.add(1.2f, 2.3f, 3.4f) << endl;

return 0;
}





