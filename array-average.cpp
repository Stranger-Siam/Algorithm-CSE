#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float average;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum = sum + a[i];
    }

    average = (float)sum / n;

    cout << "Average = " << fixed << setprecision(2) << average;

    return 0;
}
