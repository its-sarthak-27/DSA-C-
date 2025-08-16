#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 25, 36, 47, 59, 60};
    int key, found = 0;

    cout << "Enter number to search: ";
    cin >> key;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Not found";
    return 0;
}
