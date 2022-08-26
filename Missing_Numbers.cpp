#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int res = (d+a)/2;
    if(res%2 == 0){
        cout<<res<<" "<<d-res<<endl;
    }
    else 
      cout<<-1<<" "<<-1<<endl;
  }

    return 0;
}