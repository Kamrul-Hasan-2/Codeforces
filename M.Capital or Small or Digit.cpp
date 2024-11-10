#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    char a; cin>> a;

    if(a >= 'A' && a <= 'Z'){
        cout << "ALPHA" << endl; 
        cout << "IS CAPITAL" << endl;
    }else if(a>='a' && a<='z'){
        cout << "ALPHA" << endl; 
        cout << "IS SMALL" << endl;
    }else{
        cout << "IS DIGIT" << endl; 
        
    }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}