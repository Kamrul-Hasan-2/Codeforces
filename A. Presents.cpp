#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define f1 for(int i=1; i<=n; i++)
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {

    int n, v; 
    cin >> n;

    vector<int> gifts(101);

    f1{
        cin >> v;  
        gifts[v] = i;
    }

    cout << endl;

    f1{
        cout << gifts[i] << " ";
    }
    

}

int32_t main() {
    IOS;

    solution();
    return 0;
}