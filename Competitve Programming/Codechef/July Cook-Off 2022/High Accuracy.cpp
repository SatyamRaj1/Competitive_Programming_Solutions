#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int ab=0;ab<t;ab++){
        int n;
        cin>>n;
        int a=n%3;
        if(a==0)
            cout<<0;
        else if(a==1)
            cout<<2;
        else
            cout<<1;
        cout<<endl;
    }
    return 0;
}