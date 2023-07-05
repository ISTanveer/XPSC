#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];
    vector<int> b(n); for(int i=0; i<n; i++) cin>>b[i];
    int ans = 0;
    bool flag = true;
    for(int i=0; i<n; i++)
    {
        ans = max(ans, (a[i]-b[i]));
    }
    for(int i=0; i<n; i++)
    {
        a[i] -= ans;
        if(a[i]<0) a[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i]) {
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
