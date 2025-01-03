#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define f0 for(int i=0; i<n; i++)
#define f1 for(int i=1; i<=n; i++)
#define f3 for(int i=1; i<6; i++)
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    tc{
        int n, cnt=0, m =1; cin>> n; 
        int A[6];

        f3{
            A[i] = n%10;
            n/=10;

            if(A[i] !=0){
                cnt++;
            }
        }
        cout << cnt << nl;

        f3{
            if(A[i] !=0){
                cout << A[i] * m << " ";
            }
            m*=10;
        }
        cout << nl;
    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}