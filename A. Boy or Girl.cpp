#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string s; cin >> s;
    int count=0;
    sort(s.begin(), s.end());
    
    for(int i =0; i<s.size(); i++){
        if(s[i] != s[i-1]){
            count++;
        }
    }

    if(count %2==0){
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