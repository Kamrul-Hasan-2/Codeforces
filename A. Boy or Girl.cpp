#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string s; cin >> s;
    if(s.length() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else if(s[0] == "w"){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}