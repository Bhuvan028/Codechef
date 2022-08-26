#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int c,d;
    cin>>c>>d;
    if(c==d) cout<<"YEs"<<endl;
    else if(abs(c-d)%2 == 0) cout<<"YeS"<<endl;
    else cout<<"No"<<endl;

  }

    return 0;
}