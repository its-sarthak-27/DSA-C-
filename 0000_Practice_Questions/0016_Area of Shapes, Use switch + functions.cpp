#include <iostream>
using namespace std;

double circle(double r) { return 3.14 * r * r; }
double rectangle(double l, double w) { return l * w; }
double triangle(double b, double h) { return 0.5 * b * h; }

int main() {
    int choice;
    cout << "1.Circle  2.Rectangle  3.Triangle\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area = " << circle(r);
            break;
        }
        case 2: {
            double l, w;
            cout << "Enter length & width: ";
            cin >> l >> w;
            cout << "Area = " << rectangle(l, w);
            break;
        }
        case 3: {
            double b, h;
            cout << "Enter base & height: ";
            cin >> b >> h;
            cout << "Area = " << triangle(b, h);
            break;
        }
        default: cout << "Invalid Choice!";
    }
    return 0;
}
