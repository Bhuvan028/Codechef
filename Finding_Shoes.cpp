#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    if(m>n){
        cout<<n<<endl;
    }
    else if(n>m){
        cout<< (2*n) - m <<endl;
    }
    else if(n==m){
         cout<< m <<endl;
    }
    else 
    cout<< n*2 <<endl;
   
  }

    return 0;
}