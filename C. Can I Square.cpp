#include <bits/stdc++.h>
using namespace std; 

#define int long long

void solve(){
  int n; cin >> n;
  int A[n];
  int sum =0;
  for(int i=0; i<n; i++){
    cin>> A[i];
    sum+=A[i];
  }
  
  int sum2 = sqrt(sum);

  if(sum == sum2 * sum2){
    cout << "YES" << endl;
  }else{
    cout << "NO" <<endl;
  }
}

int32_t main(){
    int tc; cin>> tc;
    while (tc--){
        solve();
    }
    return 0;
}