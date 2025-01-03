#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define int long long
#define tc int t; cin >> t; while(t--)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
const int M = 1e9 + 7;
const int N = 1e5 + 10;
int fact[N];


// Time Complexity = O(n)
void normalFactorial() {
    tc{
        int n; cin>> n;
        int fact = 1;

        for(int i=1; i<=n; i++){
            fact = fact * i;
        }
        cout << fact << nl;
    }

}

// Time Complexity = O(n) 
// O(T * N) = 10^10
void modularFactorial(){
   tc{
        int n; cin>> n;
        int fact = 1;

        for(int i=2; i<=n; i++){
            fact = (fact * i ) % M;
        }
        cout << fact << nl;
    }

}

// Time Complexity = O(1)
// O(N) + O(T) = 10^5 + 10^5
void preComputationFactorial (){
    fact[0] = fact[1] = 1;

    for(int i =2; i<N; i++){
        fact[i] = fact[i-1] * i;
    }
     tc{
        int n; cin>> n;
        cout << fact[n] << nl;
    }
}


int32_t main() {
    IOS;

    preComputationFactorial();
    return 0;
}