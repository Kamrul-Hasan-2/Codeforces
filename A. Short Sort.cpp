#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
   tc{
    string s; cin>> s;

    if(s == "abc" || s == "acb" || s == "bac" || s == "cba"){
        cout << "YES" <<nl;
    }else{
        cout << "NO" << nl;
    }
    
   }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}