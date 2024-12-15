#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string s; cin>> s;
    int cnt1 = 0, cnt2 = 0;
    char ch;


    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cnt1++;
        }else{
            cnt2++;
        }
    } 

    if(cnt1 == cnt2 || cnt1 >= cnt2){
        transform(s.begin(), s.end(), s.begin(),::tolower);
    }else{
        transform(s.begin(), s.end(), s.begin(),::toupper);
    }
    cout << s << endl;
}

int32_t main() {
    IOS;

    solution();
    return 0;
}