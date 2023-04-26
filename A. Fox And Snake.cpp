#include <bits/stdc++.h>
using namespace std;
int main() {
   int i, j, r, c;
   cin>>r >>c;
   for (i = 1; i <= r; i++) {
      for (j = 1; j <c; j++) {
         if(i % 4==0){
            if(j==c-1){
                cout<<"#";
            }
            else{
                cout<<".";
            }
         }
         else if(i%4==2){
            if(j==0){
                cout<<"#";
            }
            else{
                cout<<".";
            }
         }
         else{
            cout<<"#";
         }
      }
      cout<<endl;
   }
   return 0;
}