#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int xs=0;xs<t;xs++){
    int n;
    cin>>n;
    if(n<2){
        cout<<n;
    }
    if(n<3){
        cout<<1<<" "<<2;
    }
    else if(n<4){
        cout<<"-1";
    }
    else{
        int t=2;
        int k=1;
        while(t<=n){
            cout<<t<<" "<<k<<" ";
            t+=2;
            k+=2;
            if(t>n)
                break;
            cout<<t<<" ";
            t+=2;
        }
        while(k<=n){
            cout<<k<<" ";
            k+=2;
        }
    }
    cout<<endl;
    }
    return 0;
}