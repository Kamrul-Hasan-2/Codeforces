#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    tc {
        string a, b = ""; 
        cin >> a; 

        for (char ch : a) {
            if (ch == 'p') {
                b = 'q' + b;
            } else if (ch == 'q') {
                b = 'p' + b;
            } else {
                b = 'w' + b;
            }
        }

        cout << b << nl; 
    }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}