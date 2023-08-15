#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, l, r, k; cin>>n>>l>>r>>k; vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int cnt=0;
    for(int i=0; i<n;i++)
    {
        if(v[i]>=l&&v[i]<=r&&k-v[i]>=0){
            cnt++;
            k-=v[i];
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
