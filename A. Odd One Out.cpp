#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c; cin>> a >> b>> c;

    if(a == b){
        cout << c << endl;
    }else if(b == c){
        cout << a << endl;
    }else {
        cout << b << endl;
    }
}

int main(){
    int tc; cin>> tc;
    while (tc--){
        solve();
    }
    return 0;
}