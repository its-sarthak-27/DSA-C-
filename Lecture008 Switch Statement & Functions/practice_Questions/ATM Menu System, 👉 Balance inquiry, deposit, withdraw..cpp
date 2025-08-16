#include <iostream>
using namespace std;

double balance = 1000;  // initial balance

void deposit(double amt) {
    balance += amt;
    cout << "Deposited: " << amt << ", Balance = " << balance;
}

void withdraw(double amt) {
    if (amt <= balance) {
        balance -= amt;
        cout << "Withdrawn: " << amt << ", Balance = " << balance;
    } else {
        cout << "Insufficient Balance!";
    }
}

int main() {
    int choice;
    double amt;

    cout << "1.Balance  2.Deposit  3.Withdraw\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Balance = " << balance; break;
        case 2: cout << "Enter amount: "; cin >> amt; deposit(amt); break;
        case 3: cout << "Enter amount: "; cin >> amt; withdraw(amt); break;
        default: cout << "Invalid Option!";
    }
    return 0;
}
