#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int a, b, t, cnt = 0; cin >> a >> b >> t;
    for(int i=a; i<=t; i+=a){
        cnt+=b;
    }

    cout << cnt << nl;

}

int32_t main() {
    IOS;

    solution();
    return 0;
}