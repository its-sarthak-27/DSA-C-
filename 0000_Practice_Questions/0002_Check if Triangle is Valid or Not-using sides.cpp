#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a))
        cout << "Valid Triangle." << endl;
    else
        cout << "Not a Valid Triangle." << endl;

    return 0;
}
