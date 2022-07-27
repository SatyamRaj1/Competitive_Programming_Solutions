#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int ab=0;ab<t;ab++){
        int n,o,t;
        cin>>n>>o>>t;
        int cost = n/o;
        if(n%o != 0)
            cost++;
        cout<<cost*t<<endl;
    }
    return 0;
}