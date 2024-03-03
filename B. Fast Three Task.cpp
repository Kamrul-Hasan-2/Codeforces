#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int n, cnt, sum=0; cin >> n;
    int A[n];

    for(int i=0; i<n; i++){
        cin>> A[i];
    }

    for(int i=n; i>0; i--){
        sum += A[i];
        for(int j=0; j<n; j++){
            if(sum % 3 == 0){
                cout << "0" << nl;
            }
        }
    }

}

int32_t main() {
    IOS;
    tc{
        solution();
    }

    return 0;
}