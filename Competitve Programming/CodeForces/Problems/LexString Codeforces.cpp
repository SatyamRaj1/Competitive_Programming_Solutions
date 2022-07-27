#include<iostream>
using namespace std;

string LexString(string A,int a,string B, int b, int c){
sort(A.begin(),A.end());
sort(B.begin(),B.end());
string result="";
int i=0,j=0,k=0,l=0;
while(i<a && j<b){
    if(A[i]<B[j] && k<c){
        result+=A[i++];
        k++;
        l=0;
    }
    else if(A[i]<B[j]){
        result+=B[j++];
        l++;
        k=0;
    }
    else if(A[i]>B[j] && l<c){
        result+=B[j++];
        l++;
        k=0;
    }
    else if(A[i]>B[j]){
        result+=A[i++];
        k++;
        l=0;
    }
    else if(A[i]==B[j]){
        if(l<k){
            if(l<c){
                result+=A[i++];
                l++;
                k=0;
            }
            else{
                result+=B[j++];
                k++;
                l=0;
            }
        }
        else{
            if(k<c){
                result+=B[j++];
                k++;
                l=0;
            }
            else{
                result+=A[i++];
                l++;
                k=0;
            }
        }

        }

    }


return result;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int a,b,c;
    cin>>a>>b>>c;
    string A,B;
    cin>>A>>B;
    cout<<LexString(A,a,B,b,c)<<endl;
    }
return 0;
}