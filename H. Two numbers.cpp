#include<bits/stdc++.h>
using namespace std;
int main(){
    long a, b,  sum, sum2;
    cin>> a >> b;
    sum = a/b;
    sum2 = a/b;
    double sum1 = a/b; 
    cout << "floor " << a << " / " << b << " = "<< int(sum)<< endl;
    cout << "ceil " << a << " / " << b << " = "<< int(sum+1)<< endl;
    if(sum2 <= sum1+.5){
        cout << "round " << a << " / " << b << " = "<< sum1+1<< endl;
    }
    else{
        cout << "round " << a << " / " << b << " = "<< sum1<< endl;
    }
   
    
    return 0;
}