#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        if(n.length()<2){
            cout<<char(int(n[0])-1)<<endl;
            continue;
        }
        bool f = 1;
        string ans= "";
        ans+=char(int(n[0]) - int('1') + int('0'));
        for(int i=1;i<n.length();i++){
            ans+=n[i];
        }
        n = ans;
        ans = "";
        for(int i=0;i<n.length();i++){
            if(n[i]=='0' && f){
                continue;
            }
            else{
                ans +=n[i];
                f = 0;
            }
        }
        if(ans.length()==0)
            ans = "0";
        cout<<ans<<endl;
    }

    return 0;
}
