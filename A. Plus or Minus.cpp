#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int a, b, c, p=0,m=0;
        cin>>a>>b>>c;
        p=a+b;
        m=a-b;
        if(c == p){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }
}
