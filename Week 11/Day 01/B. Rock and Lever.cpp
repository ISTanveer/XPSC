#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    long long ans=0;
    vector<long long> b(33, 0);
    for(int i=0; i<n; i++)
    {
        int tem = v[i];
        int cnt = 0;
        while(tem!=0){
            tem /=2;
            cnt++;
        }
        b[cnt]++;
    }
    for(int i=0; i<33; i++)
    {
        if(b[i]>=2){
            ans += (b[i]*(b[i]-1)/2);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
