#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int n, cnt=0;

    cin >> n;

    int s[n];

    for(int i=0; i<n; i++){
        cin>> s[i];
    }

    for(int i=0; i<n; i++){
        cout << 'a';
    }
    cout << nl;
}

int32_t main() {
    IOS;
    tc{
        solution();
    }
    return 0;
}