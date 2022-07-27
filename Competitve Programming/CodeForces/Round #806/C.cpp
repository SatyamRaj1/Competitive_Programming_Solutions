#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++){
            int p;
            string s;
            cin>>p;
            cin>>s;
            for(int j=0;j<p;j++){
                if(s[j]=='U'){
                    arr[i]-=1;
                    if(arr[i]==-1)
                        arr[i]=9;
                }
                else{
                    arr[i]+=1;
                    if(arr[i]==10)
                        arr[i]=0;
                }
            }
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
