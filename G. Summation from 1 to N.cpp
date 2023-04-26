#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, sum = 0, i;
    cin >> a;
    for(i=1; i<=a; i++){
        sum = sum + i;
    }
    cout << sum;
}