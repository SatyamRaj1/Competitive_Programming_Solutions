#include<iostream>
#include<vector>
using namespace std;
vector<int> getSum(int target,int n,vector<int> tg){
    if(target>n){
        tg.push_back(n);
        return getSum(target-n,n-1,tg);
    }
        tg.push_back(target);
        return tg;
}
bool goldenratio(int n,int x,int y){
    int s=n*(n+1)/2;
    int a=s/(x+y);
    if(a*(x+y)!=s)
        return 0;
    else{
        cout<<"POSSIBLE\n";
        a=a*x;
        vector<int> result;
        result = getSum(a,n,result);
        cout<<result.size()<<endl;
        for(int i=0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<t+1;i++){
        int n,x,y;
        cin>>n>>x>>y;
        cout<<"Case #"<<i<<": ";
        if(!goldenratio(n,x,y))
            cout<<"IMPOSSIBLE\n";
    }

    return 0;
}