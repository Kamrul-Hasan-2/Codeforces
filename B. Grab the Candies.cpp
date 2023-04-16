#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m=0, b=0;
        cin>> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                m+=arr[i];
            }
            else{
                b+=arr[i];
            }
        }
        if(m<=b){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

}
