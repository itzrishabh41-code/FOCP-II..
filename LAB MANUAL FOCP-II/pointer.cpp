#include <iostream>
using namespace std;

int main() {
    int n , original = n, rev = 0;
cout<<"number"<<endl;
cin>>n;
    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}