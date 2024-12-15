#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string a, b, c;
    cin >> a >> b >> c;

    string d = a + b;
    
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    //for(int i = 0; i<d.size(); i++){
        if(d == c){
            cout << "YES" << nl;
            return;
        }else{
            cout << "NO" << nl;
            return;
        }
  //  }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}