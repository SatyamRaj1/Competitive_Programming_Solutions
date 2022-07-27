#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<stack>
#include<queue>
using namespace std;

string Sunm(vector<int> arr, int n){
    map<int, vector<int> > m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[arr[j]-arr[i]].push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(m[arr[i]+arr[j]].size() >0){
                    int t=0;
                    for(int k=0;k<m[arr[i]+arr[j]].size();k++){
                        if(m[arr[i]+arr[j]][k] != i && m[arr[i]+arr[j]][k]!=j )
                            t++;
                    }
                    if(t!=n-2)
                        return "NO";
                }
                    else
                        return "NO";
                    
                }
                    
            }
        
    return "YES";
}

int main(){
    int t;
    cin>>t;
    for(int abx = 0;abx<t;abx++){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            arr.push_back(b);
        }
        cout<<Sunm(arr,n)<<endl;
    }
    return 0;
}
