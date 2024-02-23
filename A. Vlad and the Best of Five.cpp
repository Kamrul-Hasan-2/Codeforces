#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string s; cin >> s; 
    int cntA = 0, cntB = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A'){
            cntA++;
        }else{
            cntB++;
        }
    }

    if(cntA > cntB){
        cout << 'A' << nl;
    }else{
        cout << 'B' << nl;
    }
}

int32_t main() {
    IOS;

    tc{
        solution();
    }
    
    return 0;
}