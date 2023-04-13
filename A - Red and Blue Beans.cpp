#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        if(c==0){
            if(a==b){
            cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            ll aa=max(a,b);
            ll bb=min(a,b);
            c++;
             ll x=bb*c;
            if(x>=aa){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
}
