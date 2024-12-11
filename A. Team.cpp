#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt = 0; cin>> n;
    while (n--)
    {
        int  p, v, t;
        cin >> p>> v>> t;
        if(p+v+t > 1){
            cnt++;
        }
    }

     cout << cnt << endl;
    return 0;
}