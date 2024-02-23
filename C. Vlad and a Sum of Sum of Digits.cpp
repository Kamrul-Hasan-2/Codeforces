#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int peakCount = 0;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                peakCount++;
            }
        }

        if (peakCount == 0) {
            cout << "Case " << t << ": -1" << endl;
        } else {
            cout << "Case " << t << ": " << n / peakCount << endl;
        }
    }
    return 0;
}
