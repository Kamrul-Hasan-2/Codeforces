#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
   string s1, s2, s3,s4,s5, s6;

   cin >> s1 >> s2;

   cout << s1.length() << " " << s2.length() << nl;
   cout << s1 + s2 << nl;

   s3= s1.substr(1);

   s4 = s2.substr(1);

   for(int i=1; i<=s1.size(); i++){
        s5 = s1[0];
   }
   

   for(int i=1; i<=s2.size(); i++){
        s6 = s2[0];
   }

    cout << s6 + s3 << " " << s5 + s4;

  


    
} 

int32_t main() {
    IOS;

    solution();
    return 0;
}