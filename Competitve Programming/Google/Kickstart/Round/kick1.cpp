#include<iostream>
#include<string>
using namespace std;
string changepass(string s,int n){
    int up=0;
    int lo=0;
    int sp=0;
    int di=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#' || s[i]=='@' || s[i]=='*' || s[i]=='&')
            sp=1;
        if(int(s[i])>=int('a') && int(s[i])<=int('z'))
            lo=1;
        if(int(s[i])>=int('A') && int(s[i])<=int('Z'))
            up=1;
        if(int(s[i])>=48 && int(s[i])<=57)
            di=1;
        if(up&&lo&&di&&sp){
            for(int j=s.length();j<7;j++)
                s+="A";
            return s;
        }
    }
    if(!sp)
        s+="@";
    if(!lo)
        s+="a";
    if(!up)
        s+="A";
    if(!di)
        s+="1";
    for(int j=s.length();j<7;j++)
                s+="A";
    return s;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        string s;
        cin>>n;
        cin>>s;
        cout<<"case #"<<i<<": "<<changepass(s,n)<<endl;
    }
    return 0;
}