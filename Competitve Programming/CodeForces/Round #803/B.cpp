#include<iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int abx = 0;abx<t;abx++){
        int n,k;
        cin>>n>>k;
        int a,b;
        cin>>a>>b;
        int count = 0;
        for(int i=1;i<n-1;i++){
            int c;
            cin>>c;
            if(b>a+c)
                count++;
            a=b;
            b=c;
        }
        if(k==1)
            cout<<(n-1)/2<<endl;
        else
            cout<<count<<endl;
    }
    return 0;
}
