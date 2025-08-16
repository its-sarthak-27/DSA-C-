#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i > 0; i /= 10) {
        sum += i % 10;
    }

    cout << "Sum of digits = " << sum << endl;
    return 0;
}
