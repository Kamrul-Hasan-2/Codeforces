#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int a, b, c; cin >> a >> b >> c;
    if((a*a) + (b*b) < (c*c)){
        cout << "Yes" << nl;
    }else{
        cout << "No" << nl;
    }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}