#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int c,p;
    cin>>c>>p;
    int re = c/p;
    if(c%p == 0){
    if(re % 2 == 0){
        cout<<"YEs"<<endl;
    }
    else cout<<"nO"<<endl;
    }
    else cout<<"nO"<<endl;
  }

    return 0;
}