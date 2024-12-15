#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    
    while(ss >> word){
        for(int i=0; i<word.size(); i++){
            word[i] = toupper(word[i]);
        }
        cout << word<< endl;
    }
}

int32_t main() {
    IOS;

    solution();
    return 0;
}