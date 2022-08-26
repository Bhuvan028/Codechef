#include<bits/stdc++.h>
using namespace std;

int main()
{     int t;
     cin>>t;
    while(t--){
        int x; int c=0,sum=0;
        cin>>x;
        for(int i=1;i<=x;i++){
            sum+=i;
            if(sum<=x)
                c++; 
             else
                break;
        }
        cout<<c<<endl;
  }

    return 0;
}