#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
  //  int A[n];
    int sum = 0;
  //  double d;

    bool hasFour = false;
	bool hasThree = false;
    bool hasTwo = false;
	//int sum = 0;
 
	for(int i = 0; i<n; i++){
		int x;
		cin >> x;
		sum += x;
		if(x == 4){
			hasFour = true;
		}else if(x==3){
			hasThree = true;
		}
        else if(x == 2){
            hasTwo = true;
        }
	}
 
	if(hasFour){
		cout << ceil(sum/4.0) << endl;
	}else if(hasThree && hasTwo){
		cout << ceil(sum/3.0) << endl;
	}else{
		cout << ceil(sum/4.0) << endl;
	}

    // for(int i=0; i<n; i++){
    //     cin>> A[i];
    // }

    // for(int i=0; i<n; i++){
    //     sum+=A[i];
    // }

    // d = sum/4.0;
    // cout <<ceil(d) << endl;
   
    return 0;
}