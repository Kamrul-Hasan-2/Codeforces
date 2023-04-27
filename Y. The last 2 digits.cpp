#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c, d, sum, sum1;
    cin>> a >> b >> c >> d;
    sum = (a%100) * (b%100) * (c%100) * (d%100);
    sum1 = sum % 100;
    if(sum1 < 10){
        cout << "00" << endl;
    }
    else{
        cout << sum1 << endl;
    }
    return 0;
}