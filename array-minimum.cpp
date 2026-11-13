#include <iostream>
using namespace std;

int main() {
    int n, min;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    cout << "Minimum = " << min;

    return 0;
}
