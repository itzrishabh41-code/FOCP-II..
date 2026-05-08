#include<iostream>
using namespace std;
class Area
{
public:
int area(int side)
{
return side * side;
}

int area(int length, int breadth)
    {
        return length * breadth;
    }
};

int main()
{
    Area ob;

    int square_area;
    int rectangle_area;

    square_area = ob.area(5);
    rectangle_area = ob.area(10, 6);

    cout << "Area of square is: " << square_area << endl;
    cout << "Area of rectangle is: " << rectangle_area << endl;

    return 0;
}