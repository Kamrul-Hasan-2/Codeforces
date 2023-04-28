#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long a, b, c, d, res, res1;
    cin>> a>> b>> c>> d;

    res = pow(a, b);
    res1 = pow(c,d);

    if(res > res1){
        cout<< "YES" << endl;
    }
    else cout << "NO"<< endl;
    return 0;
    
}