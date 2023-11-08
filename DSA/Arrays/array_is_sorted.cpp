#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = 6;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            cout << "Array is not sorted in ascending order." << endl;
            return 1; // Return a non-zero value to indicate failure.
        }
    }

    cout << "Array is sorted in ascending order." << endl;
    return 0; // Return 0 to indicate success.
}
