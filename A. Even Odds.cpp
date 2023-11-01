#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long even_start = (n + 1) / 2;

    if (k <= even_start) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - even_start) << endl;
    }
    return 0;
}

