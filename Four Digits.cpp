#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string s; cin>> s;
    int cnt = s.size();

    if(cnt == 1){
        cout << "000" << s << nl;
    }else if(cnt == 2){
        cout << "00" << s << nl;
    }else if(cnt == 3){
        cout << "0" << s << nl;
    }else{
        cout << s << nl;
    }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}