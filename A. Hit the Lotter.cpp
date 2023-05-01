#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, res=0;
    cin>> n;
    while(n!=0){
        if(n>=100){
           n-=100;
           res++; 
        }
        else if(n>=20){
           n-=20;
           res++; 
        }
        else if(n>=10){
           n-=10;
           res++; 
        }
        else if(n>=5){
           n-=5;
           res++; 
        }
        else{
            n-=1;
            res++; 
        }
    }
    cout << res;
}