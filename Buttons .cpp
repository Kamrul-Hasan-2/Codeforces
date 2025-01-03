#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int a, b, res1, res2, res3; cin >> a >> b;
    
    res1 = a + (a- 1);
    res2 = b + (b- 1);
    res3 = a + b;

    int finalRes = max((max(res1, res2)), res3);

    cout << finalRes << nl;
    
}

int32_t main() {
    IOS;

    solution();
    return 0;
}