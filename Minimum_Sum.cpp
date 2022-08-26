// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {     int t; cin>>t;
//     while(t--){
//     int a[100]; int x;
//     int n; cin>>n; 
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<n; i++){
//          x = __gcd(a[i], a[i+1]);
//     }
//     cout<<x*n<<endl;
//   }

//     return 0;
// }


#include<bits/stdc++.h>
#define int long long
using namespace std;
 
int n,x,t;
void solve() {
  cin >> n >> x;
  for(int i=1;i<n;i++) {
    cin >> t;
    x=__gcd(x,t);
  }
  cout << x*n << endl;
}
signed main() {
  int mkt;
  cin >> mkt;
  while(mkt--) solve();
}