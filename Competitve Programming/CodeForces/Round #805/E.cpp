#include <bits/stdc++.h>

using namespace std;

#define N 100200

vector<int> graphf[N];
void addEdge(int x, int y)
{
	graphf[x].push_back(y);
	graphf[y].push_back(x);
}
int shortest_cycle(int n)
{
	int ans = INT_MAX;
	for (int i = 0; i < n; i++) {
		vector<int> dis(n, (int)(1e9));
		vector<int> par(n, -1);
		dis[i] = 0;
		queue<int> q;
		q.push(i);
		while (!q.empty()) {
			int x = q.front();
			q.pop();
			for (int it : graphf[x]) {
				if (dis[it] == (int)(1e9)) {
					dis[it] = 1 + dis[x];
					par[it] = x;
					q.push(it);
				}
				else if (par[x] != it and par[it] != x)
					ans = min(ans, dis[x] + dis[it] + 1);
			}
		}
	}
	if (ans == INT_MAX)
		return -1;

	else
		return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
		bool sameed = false;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            addEdge(a, b);
			if(a==b){
				sameed = true;
				break;
			}
        }
		if(sameed){
			cout<<"NO\n";
			continue;
		}
        int s = shortest_cycle(n);
    if(s>3)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
        
    }
    return 0;
}



// avoid backedges remaining
