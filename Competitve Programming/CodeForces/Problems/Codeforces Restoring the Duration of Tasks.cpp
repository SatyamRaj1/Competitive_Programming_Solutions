#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
        int n;
        cin>>n;
        int A[n];
        int B[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
            if(i==0)
                cout<<B[i]-A[i];
            else{
                if(B[i-1]<A[i])
                    cout<<" "<<B[i]-A[i];
                else if(B[i]-B[i-1] >=0)
                    cout<<" "<<B[i]-B[i-1];
                else
                    cout<<" 0";
            }
        }
        cout<<endl;
    }
    return 0;
}