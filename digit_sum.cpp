#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

void solution() {
    int n; cin>> n;

    int digit_sum = 0;
    while(n>0){
        int last_digit = n%10;
        digit_sum = digit_sum + last_digit;
        n=n/10;
    }

    cout << digit_sum << endl;

}

int32_t main() {
    IOS;

    solution();
    return 0;
}