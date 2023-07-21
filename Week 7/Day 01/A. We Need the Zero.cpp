#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int x = 0; x<(1<<8); x++)
    {
        vector<int> ans = v;
        for(int i=0; i<n; i++){
            ans[i] = ans[i]^x;
        }
        int res = 0;
        for(int i=0; i<n; i++)
        {
            res ^= ans[i];
        }
        if(res==0){
            cout<<x<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
