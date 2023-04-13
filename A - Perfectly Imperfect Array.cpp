#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,x,a;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            a=sqrt(x);
             if(a*a !=x) ans=1;
        }
         if(ans==1){
                cout <<"YES"<<endl;
            }
            else{
                cout << "NO"<<endl;
            }
    }

    return 0;
}
