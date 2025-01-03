#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int n; cin>> n;
    cout << n << " ";
    while(n != 1){
        if(n % 2 == 0){
            n = n /2;
        }else{
            n = (3*n)+1;
        }
        cout << n << " ";
    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}