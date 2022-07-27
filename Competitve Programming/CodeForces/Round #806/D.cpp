#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct compare {
    inline bool operator()(const std::string& first,
            const std::string& second) const
    {
        return first.size() < second.size();
    }
};

int main(){
    int t;
    cin>>t;
    compare c;
    while(t--){
        int n;
        cin>>n;
        vector<string> v;
        string arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end(),c);
        for(int i=0;i<n;i++){
            bool flag = 0;
            int l = arr[i].length();
            int s = 0;
            int e = n-1;
            while(s<=e){
                if(v[s].length()+v[e].length()==l){
                    int p = e;
                    int q = l-v[s].length();
                    while(p>0 && q==v[p].length()){
                        if(arr[i]==v[s]+v[p] || arr[i]==v[p]+v[s]){
                            flag = 1;
                            break;
                        }
                        q--;
                    }
                    s++;
                }
                else if(v[s].length()+v[e].length()>l){
                    e--;
                }
                else{
                    s++;
                }
                if(flag)
                        break;
            }
        if(flag)
            cout<<"1";
        else 
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}
