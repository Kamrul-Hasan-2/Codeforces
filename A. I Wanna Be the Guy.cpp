#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int finalLevel, x, y, A[200],cnt = 0;
    cin >> finalLevel >> x;

    for(int i=0; i<x; i++){
        cin >> A[i];
    }

    cin >> y;
   // cout << y ;

    for(int i = x; i<x+y; i++){
        cin >> A[i];
    }

    sort(A, A+(x+y));

    for(int i=0; i<x+y; i++){
        if(A[i] != A[i+1]){
            cnt++;
        }
    }

    if(finalLevel == cnt){
        cout << "I become the guy." << nl;
    }else{
        cout << "Oh, my keyboard!" << nl;
    }
    


}

int32_t main() {
    IOS;

    solution();
    return 0;
}