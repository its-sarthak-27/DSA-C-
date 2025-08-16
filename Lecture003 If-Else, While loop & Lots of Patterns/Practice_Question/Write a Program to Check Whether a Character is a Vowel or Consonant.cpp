/*
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Check if it is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Convert to lowercase for easy checking
        char lower = tolower(ch);

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            cout << ch << " is a Vowel." << endl;
        } else {
            cout << ch << " is a Consonant." << endl;
        }
    } else {
        cout << ch << " is not an Alphabet." << endl;
    }

    return 0;
}
*/


#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    
    if (isalpha(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A' || ch == 'E'
            || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch << " is a vowel." << endl;
        }
        else {
            cout << ch << " is a consonant." << endl;
        }
    }
    else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}
