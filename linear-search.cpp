#include <iostream>
using namespace std;

int main() {
    int n, search;
    int found = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < n; i++) {
        if (a[i] == search) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }

    return 0;
}
