#include<iostream>
using namespace std;
void getans(int n){
    int a=n/3;
    if(n%3==0)
        cout<<a<<" "<<a+1<<" "<<a-1;
    else if(n%3==1)
        cout<<a<<" "<<a+2<<" "<<a-1;
    else
        cout<<a+1<<" "<<a+2<<" "<<a-1;
        }
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        getans(n);
        cout<<endl;
    }
}