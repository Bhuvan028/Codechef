#include <iostream>
using namespace std;
 
 
int main() {
    int t;cin>>t;
    while(t--){
        int n,i,x,c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            x=1+c+i;
            if(x==a[i]){
                c++;
            }
        }
        cout<<c<<endl;
    }
	return 0;
}