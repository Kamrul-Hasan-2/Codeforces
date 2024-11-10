#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    char a; cin>> a;

    if(a>= 'a' && a<='z'){
        cout << char(a - 32) << endl;
    }else if(a >= 'A' && a <= 'Z'){
        cout << char(a + 32) << endl;
    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}