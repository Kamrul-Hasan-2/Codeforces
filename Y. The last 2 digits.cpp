#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d, sum, sum1;
    cin>> a >> b >> c >> d;
    sum = a * b * c * d;
    sum1 = sum % 100;
    cout << sum1; 
}