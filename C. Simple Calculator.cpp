#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  a, b, sum, sum1, sum2;
    cin>> a >> b;
    sum = a+ b;
    sum1 = a * b;
    sum2 = a - b;
    cout<< a << " + "<< b << " = "<< sum<< endl;
    cout<< a << " * "<< b << " = "<< sum1<< endl;
    cout<< a << " - "<< b << " = "<< sum2<< endl;
    return 0;
}