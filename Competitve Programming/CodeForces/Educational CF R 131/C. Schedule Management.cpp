#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int glo = 0;
        int n,m;
        cin>>n>>m;
        vector<int> tasks;
        for(int i=0;i<m;i++){
            int a;
            cin>>a;
            tasks.push_back(a);
        }
        vector<int> tm(n,0);
        
        int k=0;
        bool f = true;
        while(f){
            f = false;
            vector<int> unfi;
            int mx = -1;
            for(int i=0;i<m;i++){
                if(tasks[i]==-1)
                    continue;
                if(tm[tasks[i]-1]<k+2){
                    tm[tasks[i]-1]++;
                    if(mx < tm[tasks[i]-1])
                        mx = tm[tasks[i]-1];
                    tasks[i]=-1;
                }
                else{
                    unfi.push_back(i);
                    f = true;
                }
            }
            if(!f)
                break;
            k = tm[0];
            if(unfi.empty())
                break;
            for(int i=0;i<n;i++){
                if(unfi.empty())
                break;
                if(tm[i] <= (mx - 2)){
                    tm[i]+=2;
                    tasks[unfi.back()]=-1;
                    unfi.pop_back();
                }
                k = min(tm[i],k);
            }
            if(unfi.empty())
                break;
        }
        int mx = 0;
        for(auto it : tm)
            mx = max(mx,it);
        cout<<mx<<endl;
    }
    return 0;
}