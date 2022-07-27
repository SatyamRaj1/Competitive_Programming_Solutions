#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int oneind,maxind;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)
                oneind = i;
            if(arr[i]==n)
                maxind = i;
        }
        if(maxind<oneind)
            oneind--;
        int s = n-maxind-1;
        s+=oneind;
        cout<<s<<endl;
        
    }
    return 0;
}
