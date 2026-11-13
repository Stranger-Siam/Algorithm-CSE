#include <iostream>
using namespace std;

int main() {
    int n;
    int largest, second;
    int foundSecond = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    largest = a[0];

    // Find largest
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    // Find first value different from largest
    for (int i = 0; i < n; i++) {
        if (a[i] != largest) {
            second = a[i];
            foundSecond = 1;
            break;
        }
    }

    if (foundSecond == 0) {
        cout << "No second largest distinct element";
        return 0;
    }

    // Find largest value smaller than largest
    for (int i = 0; i < n; i++) {
        if (a[i] != largest && a[i] > second) {
            second = a[i];
        }
    }

    cout << "Second largest = " << second;

    return 0;
}
