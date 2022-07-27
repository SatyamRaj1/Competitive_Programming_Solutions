#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int ab=0;ab<t;ab++){
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        bool f = true;
        int p=0;
        int sm=0,bi=0;

        for(int i=0;i<n;i++){
            if(arr[i]<k){
                if(arr[i]==p)
                    p++;
                else if(arr[i]>p)
                    f=false;
                sm++;
            }
            else if(arr[i]>k){
                bi++;
            }
    }
    if(!f || p!=k || sm+bi<m || m<k)
        cout<<"NO\n";
    else
        cout<<"YES\n";    
    }
    return 0;
}