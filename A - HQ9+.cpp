#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr;
    cin>>arr;
    for(int i=0; i<arr.length(); i++){
       if(arr[i] == 'H' || arr[i] == 'Q' || arr[i] == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
