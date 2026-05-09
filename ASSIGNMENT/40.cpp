#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";
    int words = 0, digits = 0, special = 0, valid = 1;

    getline(cin, str);

    int space = 0;

    for(int i = 0; i < str.length(); i++) {

        if(str[i] != ' ') {
            result = result + str[i];
            space = 0;
        }
        else if(space == 0) {
            result = result + ' ';
            space = 1;
        }
    }

    if(result[0] == ' ')
        result.erase(0,1);

    if(result[result.length()-1] == ' ')
        result.erase(result.length()-1,1);

    for(int i = 0; i < result.length(); i++) {

        if(i == 0)
            result[i] = toupper(result[i]);
        else
            result[i] = tolower(result[i]);

        if(result[i] >= '0' && result[i] <= '9')
            digits++;

        else if(!((result[i] >= 'A' && result[i] <= 'Z') ||
                  (result[i] >= 'a' && result[i] <= 'z') ||
                  result[i] == ' '))
            special++;
    }

    words = 1;

    for(int i = 0; i < result.length(); i++) {
        if(result[i] == ' ')
            words++;
    }

    for(int i = 0; i < result.length(); i++) {

        if(!((result[i] >= 'A' && result[i] <= 'Z') ||
             (result[i] >= 'a' && result[i] <= 'z') ||
             (result[i] >= '0' && result[i] <= '9') ||
             result[i] == ' ')) {
            valid = 0;
        }
    }

    cout << result << endl;
    cout << "Words = " << words << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special Characters = " << special << endl;

    if(valid == 1)
        cout << "Valid String";
    else
        cout << "Invalid String";

    return 0;
}