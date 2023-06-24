#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
vector<long long> adj[N];
vector<bool> visited(N, false);
vector<long long> leaf(N,0);

long long cl(long long  node){
visited[node] = true;
long long ans = 0;
bool l = true;
for(auto i:adj[node])
{
    if(visited[i]==false){
        l = false;
        ans += cl(i);
    }
}
if(l) return leaf[node] = 1;
else return leaf[node] = ans;
}
void solve()
{
    long long n; cin>>n;

    for(long long i=0; i<n-1; i++){
        long long a, b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cl(1);
    int q; cin>>q;
    while(q--){
        long long u, v; cin>>u>>v;
        cout<<leaf[u]*leaf[v]<<endl;
    }
    for(long long i=0; i<N; i++){
        visited[i] = false;
        leaf[i] = 0;
    }
    for(long long i=0; i<=n; i++){
        adj[i].clear();
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
