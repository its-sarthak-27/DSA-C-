#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is Uppercase." << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is Lowercase." << endl;
    else if (ch >= '0' && ch <= '9')
        cout << ch << " is a Digit." << endl;
    else
        cout << ch << " is a Special Symbol." << endl;

    return 0;
}
