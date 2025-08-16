#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is an Alphabet." << endl;
    } else {
        cout << ch << " is NOT an Alphabet." << endl;
    }

    return 0;
}
