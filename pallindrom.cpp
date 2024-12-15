#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string str, p; cin>> str;

    for(int i=str.size(); i>0; i--){
      if (str[i] != str[i-1]){
        cout << "Yes" << nl;
      }else{
      cout << "No" << nl;
      } 
    }

    cout << p << nl;

    
}

int32_t main() {
    IOS;

    solution();
    return 0;
}