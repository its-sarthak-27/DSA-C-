#include <iostream>
using namespace std;

double calculate(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : 0;
        default: return 0;
    }
}

int main() {
    double a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+ - * /): ";
    cin >> op;

    cout << "Result = " << calculate(a, b, op) << endl;
    return 0;
}
