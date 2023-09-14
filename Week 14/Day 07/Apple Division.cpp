#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;  long long sum=0, ans=1e18;
    vector<int> v(n); for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    for(int i=0; i<(1<<n); i++)
    {
        long long tem=0;
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j)){
                tem+=v[j];
            }
        }
        //cout<<tem<<endl;
        if(abs(sum-tem-tem)<ans){
            ans = abs(sum-tem-tem);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}
