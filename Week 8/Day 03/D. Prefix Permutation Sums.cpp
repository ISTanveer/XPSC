#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    long long n; cin>>n;
    vector<ll> v(n-1); for(int i=0; i<n-1; i++) cin>>v[i];
    ll tem=((n*(n+1))/2);
    if(v.back()>tem){
        cout<<"NO\n";
        return;
    }
    if(v.back()<tem) {
        v.push_back(tem);
        vector<ll> p;
        p.push_back(v[0]);
        for(int i=1; i<n; i++){
            p.push_back(v[i]-v[i-1]);
        }
        sort(p.begin(), p.end());
        int res=1;
        for(auto i:p) {
            if(i==res) res++;
            else {
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
        return;
    }
    if(v.back()==tem)
    {
        vector<ll> p;
        vector<int> visited(n+1, 0);
        for(int i=0; i<n-1; i++){
            if(i==0){
                p.push_back(v[i]);
                if(v[i]<=n){
                    visited[v[i]] = 1;
                }
            }
            else{
                p.push_back(v[i]-v[i-1]);
                if(v[i]-v[i-1]<=n) visited[v[i]-v[i-1]] = 1;
            }
        }
        vector<ll> m;
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==0) m.push_back(i);
        }
        if(m.size()!=2) {
            cout<<"NO\n";
            return;
        }
        for(int i=0; i<p.size(); i++){
            if(m[0]+m[1]==p[i]){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
