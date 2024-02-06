#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string s1, s2;
    cin >> s1 >> s2;

      if((s1.compare(s2)) < 0){
        cout << s1 << nl;
      }else if((s1.compare(s2)) == 0){
        cout << s1 << nl;
      }else{
        cout << s2 << nl;
      }
        
   
    // int len = s1.length();
    // int len2 = s2.length();

    // if(len < len2){
    //     cout << s1 << nl;
    // }else if(len > len2){
    //     cout << s2 << nl;
    // }else{
    //     cout << s2 << nl;
    // }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}