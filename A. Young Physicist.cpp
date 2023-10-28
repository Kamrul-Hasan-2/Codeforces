#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    
    int resX=0, resY=0, resZ=0;


    for(int i=0; i<n; i++)
    {
        int x, y, z;
        cin>> x >> y >> z;
        resX += x;
        resY += y;
        resZ += z;
    }

    if(resX == 0 && resY == 0 && resZ ==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
