#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==0){
            cout<<0<<endl;
            continue;
        }
        int a=0;
        string result ="";
        if(s[0]!='9'){
        for(int i=0;i<n;i++)
            result+=char(int('9')-int(s[i]) + int('0'));
        cout<<result;
        }
        else{
            string h = "";
            int f=0;
            for(int i=n-1;i>-1;i--){
            int p = int('1')-int(s[i]);
            p-=f;
            if(p<0){
                h=char(p+1+int('9'))+h;
                f=1;
            }
            else{
                f=0;
                h=char(p+int('0'))+h;
            }
        }
        cout<<h;
    }
    cout<<endl;
    }
    return 0;
}