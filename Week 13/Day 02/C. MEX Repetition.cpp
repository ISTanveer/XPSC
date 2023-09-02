#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    k%=(n+1);
    deque<int> d;
    vector<int> visit(n+1, 0);
    for(int i=0; i<n; i++){
        visit[v[i]] = 1;
    }
    int tem;
    for(int i=0; i<=n;i++){
        if(visit[i]==0) tem = i;
    }

    for(int i=0; i<n; i++) d.push_back(v[i]);

    for(int i=0; i<k; i++)
    {
        d.push_front(tem);
        tem = d.back();
        d.pop_back();
    }
    for(auto i:d) cout<<i<<" ";
    cout<<'\n';
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
