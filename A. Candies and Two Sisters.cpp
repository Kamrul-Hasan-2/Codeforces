#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
   int n; cin >> n;
    int A[n];
    for(int i=0; i<n; i++){
        cin >> A[i];
        if(A[i] == 1 || A[i] == 2){
            cout << "0" << endl;
        }else{
            cout << (A[i] - 1) / 2 << endl;
        }
    }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}