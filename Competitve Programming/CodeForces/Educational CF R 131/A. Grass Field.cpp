#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        int co=0;
        for(int i=0;i<4;i++){
            cin>>arr[i];
            co+=arr[i];
        }
        if(co==0)
            cout<<0<<endl;
        else if(co==4)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}