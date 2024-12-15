#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    tc{
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int res = a + b + c;

        if (m * 2 == res || m > res){
            cout << res<< nl;
        }else {
            cout << res - m << nl;
        }
    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}