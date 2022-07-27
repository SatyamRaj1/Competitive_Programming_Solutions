#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int p;
        cin>>p;
        int sm = 0;
        vector<int> v;
        int n = s.length();
        for(int i=0;i<n;i++){
            v.push_back(int(s[i])-int('a') + 1);
            sm+=int(s[i])-int('a')+1;
        }
        sort(v.begin(),v.end());
        for(int i = n-1;i>=0;i--){
            if(sm<=p)
                break;
            sm-=v[i];
            v.pop_back();
        }
        if(sm>p || v.empty())
            cout<<endl;
        else{
            string als = "";
            for(int i=0;i<n;i++){
                if((int(s[i])-int('a') + 1) < v.back())
                    als+=s[i];
                if((int(s[i])-int('a') + 1) == v.back()){
                    als+=s[i];
                    v.pop_back();
                    if(v.empty())
                        break;
                }
            }
            cout<<als<<endl;
        }
    }
    return 0;
}
