#include <iostream>
using namespace std;

string dayOfWeek(int d) {
    switch (d) {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 7: return "Sunday";
        default: return "Invalid Day";
    }
}

int main() {
    int d;
    cout << "Enter day number (1-7): ";
    cin >> d;
    cout << dayOfWeek(d);
    return 0;
}
