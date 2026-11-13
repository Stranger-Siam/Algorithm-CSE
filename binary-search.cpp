#include <iostream>
using namespace std;

int binary_search(int A[], int n, int x)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (A[mid] == x)
        {
            return mid;
        }

        if (A[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, x, result;

    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter " << n << " elements in sorted order:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter the value to search: ";
    cin >> x;

    result = binary_search(A, n, x);

    if (result == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Element found at index " << result << "." << endl;
    }

    return 0;
}
