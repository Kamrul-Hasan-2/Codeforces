#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    tc{
    string s; cin >> s;
	if(s == "a" || s == "b" || s == "ab" || s == "ba"){
		cout << "No" <<endl;
	}else{
		cout << "Yes" << endl;
	}
    }

}

int32_t main() {
    IOS;

    solution();
    return 0;
}