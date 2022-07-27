#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[26]={0};
        string s;
        cin>>s;
        int su = 0;
        for(int i=0;i<n;i++){
            arr[int(s[i])-int('A')]++;
            if(arr[int(s[i])-int('A')] == 1)
                su++;
            su++;
        }
        cout<<su<<endl;
    }
    return 0;
}
