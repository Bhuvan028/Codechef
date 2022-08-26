#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
      int arr[1000],b[1000],n,x,y,sum=0;;
      cin>>n>>x>>y;
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      for(int i=0;i<n;i++){
          cin>>b[i];
      }

      int flag = 0;
      for(int i=0;i<n;i++){
          if((b[i]-arr[i])!=x && (b[i]-arr[i])!=y){
              flag = 1;
              break;
          }
      }
      if(flag==0)
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl;
  }  
    return 0;
}