#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string s;
    getline(cin, s);
    
    for(auto it : s){
        if (it == '\\'){
            break;
        }
        else{
            cout << it;  
        }         
    }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}