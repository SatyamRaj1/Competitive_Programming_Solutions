#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
for(int o=0;o<t;o++){

    int n,m;
    cin>>n>>m;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        A[a-1]-=b;
        int count = 1;
        int p=A[0];
        for(int j=1;j<n;j++){
            if(A[j]<p){
                count++;
                p=A[j];
            }
        }
        cout<<count<<" ";
    }
    cout<<endl;
}

return 0;
}