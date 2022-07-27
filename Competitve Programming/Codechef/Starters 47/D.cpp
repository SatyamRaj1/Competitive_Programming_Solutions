#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%2==0 || x>=7)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
