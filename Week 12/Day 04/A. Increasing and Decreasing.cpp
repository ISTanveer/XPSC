#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y, n; cin>>x>>y>>n;
    vector<int> v(n);
    v[0] = x;
    v[n-1] = y;
    int j=1;
    for(int i=n-2; i>=1; i--)
    {
        v[i] = v[i+1]-j;
        j++;
    }
    if(v[0]>=v[1]){
        cout<<-1<<endl;
        return;
    }

    for(int i=1; i<n-1; i++)
    {
        if(v[i+1]-v[i]>=v[i]-v[i-1]){
            cout<<-1<<endl;
            return;
        }
    }
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
