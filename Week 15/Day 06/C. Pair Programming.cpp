#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int k, n, m; cin>>k>>n>>m;
    vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];
    vector<int> b(m); for(int i=0; i<m; i++) cin>>b[i];
    int i=0, j=0;
    vector<int> ans;
    while(i<n&&j<m)
    {
        if(a[i]<=b[j]&&k>=a[i]){
            ans.push_back(a[i]);
            if(a[i]==0) k++;
            i++;
        }
        else if(a[i]>=b[j]&&k>=b[j]){
            ans.push_back(b[j]);
            if(b[j]==0) k++;
             j++;
        }
        else{
            cout<<-1<<endl; return;
        }
    }
    while(i<n)
    {
        if(k>=a[i]){
            ans.push_back(a[i]);
            if(a[i]==0) k++;
            i++;
        }
        else{
            cout<<-1<<endl; return;
        }
    }
    while(j<m)
    {
        if(k>=b[j]){
            ans.push_back(b[j]);
            if(b[j]==0) k++;
            j++;
        }
        else{
            cout<<-1<<endl; return;
        }
    }
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
