#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long a, b, n, c=0, sum=0;
        cin>> a >> b>> n;
        while(n>=sum){
            sum = a+b;
            a=max(a, b);
            b = sum;
            c++;
        }
        cout<< c <<endl;
    }
}
