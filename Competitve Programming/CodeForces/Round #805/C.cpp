#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,vector<int>> mapofst;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mapofst[a].push_back(i);
        }
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            int s = -1;
            if(mapofst[a].size()>0)
                s = mapofst[a][0];
            int e = -1;
            if(mapofst[b].size()>0)
                e = mapofst[b].back();
            if(s<e && s!=-1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
