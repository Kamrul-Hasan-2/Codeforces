#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string str = "abcdeghDDlkklkdjfkd";
    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i]-=32;
        }
    }
    cout << str << nl;

    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i]+=32;
        }
    }
    cout << str << nl;
}

int32_t main() {
    IOS;
    solution();
    return 0;
}