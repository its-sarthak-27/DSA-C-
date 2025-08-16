#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, digits = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    for (int i = n; i > 0; i /= 10) digits++;

    for (int i = n; i > 0; i /= 10) {
        int d = i % 10;
        sum += pow(d, digits);
    }

    if (sum == temp)
        cout << n << " is an Armstrong Number." << endl;
    else
        cout << n << " is Not an Armstrong Number." << endl;

    return 0;
}
