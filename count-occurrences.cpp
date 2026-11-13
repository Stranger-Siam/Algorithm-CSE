#include <iostream>
using namespace std;

int main() {
    int n, number;
    int count = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter number: ";
    cin >> number;

    for (int i = 0; i < n; i++) {
        if (a[i] == number) {
            count++;
        }
    }

    cout << number << " appears " << count << " times";

    return 0;
}
