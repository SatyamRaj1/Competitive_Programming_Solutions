#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool f = true;
        if(!(s[0]=='Y' || s[0]=='y'))
            cout<<"NO\n";
        else if(!(s[1]=='e' || s[1]=='E'))
            cout<<"NO\n";
        else if(!(s[2]=='s' || s[2]=='S'))
            cout<<"NO\n";
        else 
            cout<<"YES\n";
    }
    return 0;
}
