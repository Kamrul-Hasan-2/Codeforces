#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string str; cin>> str;

    for(int i=0; i<str.size(); i++){
        str[i]-=32;
    }
    cout << str << endl;

}

int32_t main() {
    IOS;

    solution();
    return 0;
}