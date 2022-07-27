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
        }
        int flag=0;
        int mini=0;
        int flag2=0;
        bool ans=true;
        for(int i=0;i<n;i++){
            if(A[i]-B[i]<0)
                ans=false;
            if(flag==0){
                flag=1;
                mini = A[i]-B[i];
                if(B[i]!=0)
                    flag2=1;
            }
            else if(flag2==0){
                int c=A[i]-B[i];
                if(c<mini && B[i]!=0)
                    ans= false;
                else if(B[i]!=0)
                    flag2=1;
                if(mini < c)
                    mini=c;
            }
            else{
                int c=A[i]-B[i];
                if(c<mini && B[i]!=0)
                    ans = false;
                if(c>mini)
                    ans=false;
            }
            if(ans==false)
                break;
        }
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}