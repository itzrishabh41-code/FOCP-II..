#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int z = 0, o = 0;

    for (char c : word) {
        if (c == 'z')
            z++;
        else if (c == 'o')
            o++;
    }

    if (o == 2 * z)
        cout << "Yes";
    else
        cout << "No";

    return 0;
} 
























