#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int limak, bob, limakRes , bobResult; 
    cin >> limak >> bob;

    limakRes =limak * 9;
    bobResult = bob * 2;

    int res = limakRes / bobResult;
    cout << res << endl;
    
}

int32_t main() {
    IOS;

    solution();
    return 0;
}