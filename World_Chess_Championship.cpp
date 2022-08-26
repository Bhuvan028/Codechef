#include<bits/stdc++.h>
using namespace std;
int main()
{     int t; cin>>t;
    while(t--){
    int x,c=0,n=0,d=0; string str;
    cin>>x>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]== 'C'){
            c+=2;
        }
        if(str[i]== 'N'){
            n+=2;
        }
        if(str[i]=='D'){
            d+=1;
        }
    }
    if(c>n){
        cout<< x*60 <<endl;
    }
    else if(c==n){
        cout<< x*55 <<endl;
    }
    else if(n>d || n>c){
        cout<< x*40 <<endl;
    }

  }


    return 0;
}