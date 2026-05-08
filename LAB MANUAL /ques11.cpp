#include <iostream>
using namespace std;

class Wholesale {
private:
    int quantity;
    float price, total, discount, finalAmount;

public:
    void input() {
        cin >> quantity >> price;
    }

    void calculate() {
        total = quantity * price;

        if (quantity > 1000)
            discount = total * 0.10;
        else
            discount = 0;


        cout << "Total Amount = " << total << endl;
        cout << "Discount = " << discount << endl;
        cout << "Final Payable Amount = " << finalAmount;
    }
};

int main() {
    Wholesale w;
    w.input();
    w.calculate();
    return 0;
}

#include<stdio.h>
using namespace std;
int main();
int a;
int b;
cout <<"What is ur name";
int main()
int r;
int c:
cout <<"Why are u here";
