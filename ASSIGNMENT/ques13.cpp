#include <iostream>
#include <cmath>
using namespace std;

class Quadratic
{
public:
    void findRoots(double a, double b, double c)
    {
        double d, r1, r2;

        d = b * b - 4 * a * c;

        if (d > 0)
        {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            cout << "Roots are real and different\n";
            cout << "Root 1 = " << r1 ;
            cout << "Root 2 = " << r2 ;
        }
        else if (d == 0)
        {
            r1 = -b / (2 * a);
            cout << "Roots are real and equal\n";
            cout << "Root = " << r1 ;
        }
        else
        {
            cout << "Roots are imaginary (no real roots)";
        }
    }
};

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    Quadratic q;
    q.findRoots(a, b, c);

    return 0;
}