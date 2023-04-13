#include <bits/stdc++.h>
using namespace std;
int main(){
    float num[100], n, sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    for(int i=0; i<n; i++){
        sum= (sum+num[i]);
    }
   // cout << sum/n;

    printf("%.12f", sum/n);


}
