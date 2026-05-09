#include <iostream>
#include <string>
using namespace std;

int main() {
    string pass;
    int upper = 0, lower = 0, digit = 0, special = 0;

    cin >> pass;

    for(int i = 0; i < pass.length(); i++) {

        if(pass[i] >= 'A' && pass[i] <= 'Z')
            upper++;

        else if(pass[i] >= 'a' && pass[i] <= 'z')
            lower++;

        else if(pass[i] >= '0' && pass[i] <= '9')
            digit++;

        else if(pass[i] == '@' || pass[i] == '#' || pass[i] == '$' ||
                pass[i] == '%' || pass[i] == '!' || pass[i] == '&' ||
                pass[i] == '*')
            special++;
    }

    if(upper > 0 && lower > 0 && digit > 0 && special > 0)
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}