#include <iostream>
#include<map>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long count = 0;
        map<int,int> m;
        for(int i=1;i<n+1;i++){
            int a;
            cin>>a;
            if(a<i && m[i]==0)
                m[i]=a;
        }
        for(auto it:m){
            for(auto it2:m){
                if(it2.second>it.first)
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
