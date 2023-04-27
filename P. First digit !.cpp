#include <bits/stdc++.h>
using namespace std; 
int main(){
    int a, sum;
    cin>> a;
    sum = a / 1000;
    if(sum % 2 == 0){
        cout << "EVEN" << endl;
    }
    else {
        cout << "ODD"<< endl;
    }

}