#include<bits/stdc++.h>
using namespace std; 
int main(){
    int a, y = 0, m =0 , d = 0;
    cin>> a;
    while(a!=0){
        if(a >= 365){
            a -= 365;
            y++;
        }
        else if(a >= 30){
            a-=30;
            m++;
        }
        else{
            a-=1;
            d++;
        }
    }
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
}
    
   