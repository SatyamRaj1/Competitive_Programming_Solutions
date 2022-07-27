#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int ab=0;ab<t;ab++){
        int n,o,t;
        cin>>n>>o>>t;
        if(o+t*2 <= n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}