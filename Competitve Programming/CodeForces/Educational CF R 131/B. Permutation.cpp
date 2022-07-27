#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2<<endl;
        for(int i=1;i<=n;i=i+2){
            int j=i;
            for(int j=i;j<=n;j=j*2){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}