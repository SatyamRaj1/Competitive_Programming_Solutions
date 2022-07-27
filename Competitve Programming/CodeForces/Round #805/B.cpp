#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n==0){
            cout<<0<<endl;
            continue;
        }
        if(n<4){
            cout<<1<<endl;
            continue;
        }
        int i=0;
        int d = 0;
        while(i<n){
            int k = 0;
            map<char,int> m;
            while(k<3 && i<n){
                if(m[s[i]]==0)
                    k++;
                m[s[i]]++;
                i++;
                while(m[s[i]]!=0)
                    i++;
            }
            d++;
        }
        cout<<d<<endl;
    }

    return 0;
}
