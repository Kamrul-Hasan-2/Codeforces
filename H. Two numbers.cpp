#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b,  sum;
    cin>> a >> b;
    sum = a/b; 
    cout << "floor " << a << " / " << b << " = "<< sum<< endl;
    cout << "ceil " << a << " / " << b << " = "<< sum+1<< endl;
    if(sum <= sum+0.5){
        cout << "round " << a << " / " << b << " = "<< sum+1<< endl;
    }
    else {
        cout << "round " << a << " / " << b << " = "<< sum<< endl;
    }
    return 0;
}