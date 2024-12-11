#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int n;
    cin >> n;
    
    while (n--) {
        int a, b; cin>> a >> b;
        if (a > b){
            swap(a, b);
            cout << a << " " << b << endl;
        }else{
            cout << a << " " << b << endl;
        }
    }
}

int32_t main() {
    IOS;
    solution();
    return 0;
}
