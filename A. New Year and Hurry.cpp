#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int n, b, cnt = 0, countTime = 0; 
    cin >> n >> b; 

    int totalTime = 240 - b;

    for(int i=1; i<=n; i++){
        countTime += 5 * i;
        if(totalTime < countTime){
            break;
        }
        cnt++;
    }
    cout << cnt << nl;

}

int32_t main() {
    IOS;

    solution();
    return 0;
}