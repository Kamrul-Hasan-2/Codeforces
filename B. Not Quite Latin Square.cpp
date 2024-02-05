#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string str;
    int cntA =0, cntB =0, cntC =0;
    for(int i= 0; i<3; i++){
        string x;
        cin>> x;
        str+=x;
    }

    for(int i=0; i<str.size(); i++){
        if(str[i] == 'A'){
            cntA++;
        }else if(str[i] == 'B'){
            cntB++;
        }else if(str[i] == 'C'){
            cntC++;
        }
    }

    if(cntA != 3){
        cout << 'A' <<nl;
    }else if(cntB != 3){
        cout << 'B' << nl;
    }else{
        cout << 'C' <<nl;
    }
}

int32_t main() {
    IOS;
    tc{
        solution();
    }
    return 0;
}