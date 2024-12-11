#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int a, b, c; cin >> a >> b >> c;

    int aRes = sqrt(a);
    int bRes = sqrt(b);
    int cRes = sqrt(c);

    if (a == 2 || b == 2 || c == 2){
        cout << 2 << nl;
        return;
    }

    if(aRes * aRes == a){
        cout << a << endl;
    }else if(bRes * bRes == b){
        cout << b << endl;
    }else if(cRes * cRes == c){
        cout << c <<endl;
    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}