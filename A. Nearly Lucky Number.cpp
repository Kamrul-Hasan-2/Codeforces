#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int n, res1, res2; cin >> n;

    if(n == 4 || n == 7){
        cout << "NO" << nl;
        return;
    } 

   // while (n >= 10) {
        res1 = n % 100; 
   // }

    res2 = n % 10;

    if(res1 == 47){
        cout << "NO" << nl;
    }else if(res2 == 4 || res2 == 7){
        cout << "YES" << nl;
    }else{
        cout << "NO" << nl;
    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}