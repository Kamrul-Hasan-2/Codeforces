#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int a , b , c; cin >> a >> b >> c;
    for(int i = a; i<=b; i++){
        if(i % c == 0){
            cout << i << nl;
            return;
        }
    }

    cout << -1 << nl;
}

int32_t main() {
    IOS;

    solution();
    return 0;
}