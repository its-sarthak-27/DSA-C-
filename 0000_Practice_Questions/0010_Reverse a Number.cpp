#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i > 0; i /= 10) {
        rev = rev * 10 + (i % 10);
    }

    cout << "Reversed Number = " << rev << endl;
    return 0;
}
