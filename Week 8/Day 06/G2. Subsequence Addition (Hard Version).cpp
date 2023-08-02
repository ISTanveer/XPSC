#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<long long> v(n);
    vector<long long> s(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    if(v[0]!=1)
    {
        cout<<"NO\n";
        return;
    }
    s[0] = v[0];
    for(int i=1; i<n; i++) s[i] = s[i-1] + v[i];
    for(int i=1; i<n; i++)
    {
        if(v[i]>s[i-1]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
