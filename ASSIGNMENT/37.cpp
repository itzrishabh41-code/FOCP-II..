#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    int valid = 1;

    cin >> username;

    for(int i = 0; i < username.length(); i++) {

        if((username[i] >= 'A' && username[i] <= 'Z') ||
           (username[i] >= 'a' && username[i] <= 'z') ||
           (username[i] >= '0' && username[i] <= '9')) {
        }
        else {
            valid = 0;
        }
    }

    if(valid == 1)
        cout << "Valid Username";
    else
        cout << "Invalid Username";

    return 0;
}