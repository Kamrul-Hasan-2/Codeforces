#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solution()
{
    string s;
    cin >> s;
    int sum = 0;

    for (char c : s){
        sum += c - '0';
    }
    
    cout << sum;
}

int32_t main()
{
    IOS;

    solution();
    return 0;
}