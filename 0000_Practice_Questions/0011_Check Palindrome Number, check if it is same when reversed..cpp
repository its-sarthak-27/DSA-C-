#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    for (int i = n; i > 0; i /= 10) {
        rev = rev * 10 + (i % 10);
    }

    if (n == rev)
        cout << n << " is Palindrome." << endl;
    else
        cout << n << " is Not Palindrome." << endl;

    return 0;
}
