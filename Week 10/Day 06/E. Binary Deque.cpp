#include<bits/stdc++.h>
using namespace std;
///slinding window......
void solve()
{
    int n, s; cin>>n>>s;
    int sum =0;
    vector<int> v(n); for(int i=0; i<n; i++) {cin>>v[i];}
    int ans=-1, i=0,j=0;
    while(j<n)
    {
        if(sum+v[j]<=s) {
            sum+=v[j];
            j++;
        }
        else{
            ans = max(ans, j-i);
            sum-=v[i];
            i++;
        }
    }
    if(sum==s) ans = max(ans, j-i);
    if(ans==-1) cout<<-1<<endl;
    else
    cout<<n-ans<<endl;

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
