// #include <bits/stdc++.h>
// using namespace std;
// #define nl endl
// #define int long long
// #define tc int t; cin >> t; while(t--)
// #define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

// void solution() {
//     string str = "abcdeghDDlkklkdjfkd";
//     for(int i=0; i<str.size(); i++){
//         if(str[i] >= 'a' && str[i] <= 'z'){
//             str[i]-=32;
//         }
//     }
//     cout << str << nl;

//     for(int i=0; i<str.size(); i++){
//         if(str[i] >= 'A' && str[i] <= 'Z'){
//             str[i]+=32;
//         }
//     }
//     cout << str << nl;
// }

// int32_t main() {
//     IOS;
//     solution();
//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int n; cin>> n; int a[6];
   for(int i=0;i<6; i++){
       a[i] = n%10;
       n/=10;
     //   cout<<n<< endl;
       
      cout<< a[i] << endl;
   }
  
   

    return 0;
}