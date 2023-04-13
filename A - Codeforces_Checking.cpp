#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>> n;
        for(int i=0; i<n.size(); i++){
            if(n[i]=='c' || n[i]=='o' || n[i]=='o' ||n[i]=='d' ||n[i]=='e' ||n[i]=='f' ||n[i]=='o' ||n[i]=='r' ||n[i]=='c' ||n[i]=='e' ||n[i]=='s'){
            cout<< "YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
    return 0;
}
