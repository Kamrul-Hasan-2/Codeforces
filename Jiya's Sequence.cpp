#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    tc{
        int n, last_digit = 0 ,m = 1; cin >> n;
        int A[n];

        for(int i=0; i<n; i++){
            cin >> A[i];
            m = m * A[i];
            last_digit = m % 10;
        }

        if(last_digit == 2 || last_digit == 3 || last_digit == 5){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}