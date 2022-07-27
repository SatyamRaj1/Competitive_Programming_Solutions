#include <iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            m[a]++;
        }
        for(auto it:m){
            if(it.second==1)
                count++;
        }
        if(count == 1){
            bool hig = true;
            bool twoonly = true;
            for(auto it:m){
                if(it.second!=1)
                    hig = false;
                if(it.second==1)
                    hig = true;
                if(it.second>2)
                    twoonly = false;
            }
            if(hig && twoonly)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
            
        else if(count%2==0)
            cout<<count/2<<endl;
        else
            cout<<(count/2)+1<<endl;
    }
    return 0;
}
