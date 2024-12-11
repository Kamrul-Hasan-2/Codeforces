#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int n; cin >> n;
     int positiveCount = 0, negativeCount = 0, res;
    while (n--)
    {
        string s; cin >> s;
        if(s == "++X" || s == "X++"){
            positiveCount++;
        }else{
            negativeCount++;
        }
    }
    res = positiveCount - negativeCount;
    cout << res << endl;
    
}

int32_t main() {
    IOS;

    solution();
    return 0;
}