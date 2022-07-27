#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int abx = 0;abx<t;abx++){
        int n;
        cin>>n;
        int arr[n];
        int s=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<arr[0]<<endl;
    }
    return 0;
}
