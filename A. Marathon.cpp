#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    tc{
        int cnt = 0, A[4];
        for(int i=0; i<4;i++){
            cin >> A[i];
            if(A[i] > A[0]){
                cnt++;
            }
        }
        cout << cnt << nl;
    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}