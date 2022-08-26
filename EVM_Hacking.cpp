#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;
     int avg = (p+q+r) / 2;
     if(c+b+p > avg || a+q+c > avg || b+r+c > avg){
         cout<<"Yes"<<endl;
     }
     else
     cout<<"No"<<endl;
    
  }

    return 0;
}