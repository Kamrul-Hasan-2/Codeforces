#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int a, b, res; cin >> a >> b;
    res = abs(a - b) + 1;

    if(res > a || res < b){
        cout << res << nl;
    }else{
        cout << 0 << nl;
    }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}