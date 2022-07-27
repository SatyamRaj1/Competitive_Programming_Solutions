#include <iostream>
#include<vector>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k = 0;
        int count = 0;
        while(k<n/2){
            for(int i=k;i<n-1-k;i++){
                int o=0,z=0;
                if(arr[k][i]=='0')
                    o++;
                else
                    z++;
                if(arr[i][n-k-1]=='0')
                    o++;
                else
                    z++;
                if(arr[n-k-1][n-i-1]=='0')
                    o++;
                else
                    z++;
                if(arr[n-i-1][k]=='0')
                    o++;
                else
                    z++;
                count+=min(o,z);
            }
            k++;
        }
        cout<<count<<endl;
    }
    return 0;
}
