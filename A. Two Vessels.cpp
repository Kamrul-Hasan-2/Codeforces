#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        int sum;
        sum = a+b;

        cout << gcd(a, b);

        if (a<= sum && sum <= b) {
            cout << gcd(a, b) << " " << endl;
        } else {
            cout << -1 << endl;
        }
    }
    
    return 0;
}
