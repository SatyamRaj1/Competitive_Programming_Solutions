#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        int glomin=1;
        int glomax=1;
        int currmin=1;
        int currmax=1;
        cin>>arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
            if(arr[i]>arr[i-1]){
                currmax++;
                if(currmin!=1)
                    currmin=2;
            }
            else if(arr[i]<arr[i-1]){
                currmin++;
                if(currmax!=1)
                    currmax=2;
            }
            else{
                currmax=1;
                currmin=1;
            }
            glomax=max(glomax,currmax);
            glomin=max(glomin,currmin);
        }
        cout<<min(glomax,glomin)<<endl;
    }
    return 0;
}