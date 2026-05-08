#include <iostream>
using namespace std;

class MaxSales
{
public:
    void findMax()
    {
        int n, num, max;

        cin >> n;         
        cin >> max;       

        for (int i = 2; i <= n; i++)
        {
            cin >> num;
            if (num > max)
                max = num;
        }

        cout << "Largest value: " << max;
    }
};

int main()
{
    MaxSales m;
    m.findMax();
    return 0;
}