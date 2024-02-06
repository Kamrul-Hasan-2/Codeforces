#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int solution(string s) {
    int n = s.length();
    int start = -1, end = -1;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            start = i;
            break;
        }
    }

    cout <<" this is start : " <<start ;

    if (start == -1) return 0;

    for (int i = start; i < n; ++i) {
        if (s[i] == 'B') {
            end = i;
        }
    }

    return end - start + 1;
}

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int result = solution(s);
        cout << result << endl;
    }

    return 0;
}

