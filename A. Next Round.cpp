#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int n, m, count = 0;
    cin >> n >> m;
    int a[n];

    for(int i=0; i<n; i++){
        cin>> a[i];
    }

    for(int i=0; i<n; i++){
        if(a[m-1] <= a[i] && a[i] > 0){
            count++;
        }
    }

    cout << count << endl;

}

int32_t main() {
    IOS;

    solution();
    return 0;
}