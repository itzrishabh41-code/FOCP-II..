#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, rem, temp;

    cout << "Enter number: ";
    cin >> n;

    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum = sum + i;
        }
    }

    if(sum == n) {
        cout << "Perfect Number" << endl;
    }
    else {
        cout << "Not Perfect Number" << endl;
    }

    temp = n;
    sum = 0;

    while(temp > 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if(sum == n) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not Armstrong Number";
    }

    return 0;
}