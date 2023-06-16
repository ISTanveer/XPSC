#include<bits/stdc++.h>
using namespace std;
const int N = 102;
vector<int> adj[N];
int visited[N], step[N];

void bfs(int node)
{
    visited[node] = 1;
    step[node] = 0;
    queue<int> q;
    q.push(node);

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        for(auto i:adj[head])
        {
            if(visited[i] == 0)
            {
                q.push(i);
                visited[i] = 1;
                step[i] = step[head] + 1;
            }
        }
    }
}

int main()
{
    int n, e; cin>>n>>e;

    for(int i=0; i<e; i++)
    {
        int u, v; cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int x, y, k; cin>>x>>y>>k;
    int step_r[n], step_j[n], vr = 0, vj = 0;
    bfs(x);
    if(visited[y] == 1) vj = 1;
    if(step[y]<=k && visited[y] == 1){
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        step_r[i] = step[i];
    }
    for(int i=0; i<n; i++)
    {
        visited[i] = 0;
        step[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        for(auto j:adj[i])
        {
            j = 0;
        }
    }
    bfs(y);
    if(visited[x] == 1) vr = 1;
    if(step[x] <=k && visited[x] == 1) {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        step_j[i] = step[i];
    }


    if(step_r[y] == step_j[x] && vr == 1 && vj == 1)
    {
       if(step_r[y] %2 == 0)
       {
           if(step_r[y]/2 <= k)
           {
                cout<<"YES"<<endl;
                return 0;
           }
       }
       else{
        if((step_r[y] / 2) + 1 <= k) {
            cout<<"YES"<<endl;
                return 0;
        }
       }
    }
    cout<<"NO"<<endl;

//    for(int i=0; i<n; i++)
//    {
//        cout<<step_r[i]<<" "<<step_j[i]<<endl;
//    }

}
