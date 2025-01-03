#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    tc{
        int n, m, cnt = 0; cin >> n >> m;
        string s,a;
        for(int i=0; i<n; i++){
             cin >> s;
             cnt +=s.size();
             
        }
        cout << cnt << nl;


        
        // for(auto a : s){
        //     cout << a << "";
        // }

        // cout << nl;
        
       

    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}