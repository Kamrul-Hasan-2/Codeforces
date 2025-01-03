#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int a, b, c, cnt, cnt0; cin >> a >> b >> c;
   // cout << "KAmrkjdjk" << nl;
    if(a < b){
        cnt = (a*1) + (b*0);
        if(cnt >= c){
            cout << "Yes" << nl;
        }else{
            cout << "No" << nl;
        }
    }if(a > b){
        cnt0 = (a*1) + (b*2);
        if(cnt0 >= c){
            cout << "Yes" << nl;
        }else{
            cout << "No" << nl;
        }
    }

    // if(a > b){
    //     int res = (a * 1) + (b *2);
    //     cout << res;
    //     if(c == res){
    //         cout << "Yes" << nl;
    //     }
    // }else if(a < b){
    //     int res1 = a * 1 + b * 0;
    //     if(c <= res1){
    //         cout << "Yes" << nl;
    //     }
    // }else{
    //     cout << "No" << nl;
    // }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}