#include <bits/stdc++.h>
using namespace std;
int main() {
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if(n2 >= n1 && n3 >= n1){
        cout << n1;
    }
    else if(n1 >= n2 && n3 >= n2){
        cout << n2;
    }  
    else {
        cout<< n3;
    }
    
    if(n1 >= n2 && n1 >= n3){
        cout<< " " << n1;
    }   
    else if(n2 >= n1 && n2 >= n3){
        cout<< " " << n2;
    }  
    else {
        cout<< " " << n3;
    }
        
    
    return 0;
}