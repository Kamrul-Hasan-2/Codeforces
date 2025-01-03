#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    int result = -1; 

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            result = mid;
            right = mid - 1; 
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int arr[100000], n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    int result = binary_search(arr, n, x);

    if (result != -1) {
        cout  << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}