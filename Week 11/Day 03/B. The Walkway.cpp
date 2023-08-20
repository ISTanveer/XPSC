#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, d;    cin>>n>>m>>d;
    vector<long long> v(m);   for(int i=0; i<m; i++) cin>>v[i];
    long long sum = m;
    for(int i=0; i<m-1; i++)
    {
        long long pre = v[i], nxt = v[i+1];
        sum+= (nxt-pre-1)/d;
    }
    if(v[0]!=1){
        sum += (v[0]-2)/d;
        sum++;
    }
    if(v[m-1]!=n){
        sum+= (n-v[m-1])/d;
    }
    //cout<<sum<<endl;
    vector<long long> con; long long ans = 1e18;
    for(int i=1; i<m-1; i++)
    {
        long long pre = v[i-1], nxt = v[i+1], now = v[i], tem = sum;
        tem -= (now-pre-1)/d; tem-=(nxt-now-1)/d; tem--;
        tem += (nxt-pre-1)/d;
        ans = min(ans, tem); //cout<<ans<<endl;
        con.push_back(tem);
    }
    long long tem = sum;
    if(v[0]!=1){
        tem-= (v[0]-2)/d; tem--;
        }
        tem-= (v[1]-v[0]-1)/d;
        tem+= (v[1]-2)/d;
        ans = min(ans, tem);//cout<<ans<<endl;
        con.push_back(tem);

    tem = sum;
    {
        tem -=(n-v[m-1])/d; tem -= (v[m-1]-v[m-2]-1)/d; tem--;
        tem += (n-v[m-2])/d;
        ans = min(ans, tem);
        con.push_back(tem);
    }
    cout<<ans<<" ";
    int cnt=0;
    for(auto i:con){
        if(ans==i) cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
