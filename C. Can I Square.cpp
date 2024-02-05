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

#include <bits/stdc++.h>
#define nl endl
#define pb push_back
#define ll long long
#define vec vector<int>
#define N cout << 
 << nl
#define Y cout << 
 << nl
#define bsort sort(v.begin(), v.end())
#define esort sort(v.end(), v.begin())
#define tc int t; cin >> t; while(t--)
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

void solution() {

}

int main() {
    IOS;

    return 0;
}