#include <iostream>
using namespace std;
int main()
{
    int item, quantity, prices, price;
    float dis;
    float discount;

    cout << "Enter Item no\n";

    cin >> item;

    cout << "Quantity\n";

    cin >> quantity;
    cout << "Enter Unit Price\n";
    cin >> price;

    dis =quantity*(price * 20 / 100);

    discount = price - dis;

    cout << "Price After Discount\n"

         << discount;

    return 0;
}