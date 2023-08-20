#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int ans = -1;
    for(int i=1; i<=n; i++)
    {
        for(int per = 1; per<=n; per++)
        {
            int mx = per*i;
            int cur = 0, cost = 0;
            vector<int> tem;
            for(int in=n; in>=1; in--)
            {
                int limit = mx/in;
                while(cur<n&&cur<limit){
                    cur++;
                    if(cur!=per) tem.push_back(cur);
                }
                if(in==i) continue;
                if(tem.empty()){
                    cost =-1; break;
                }
                cost+=(in*tem.back());
                tem.pop_back();
            }
            ans = max(ans, cost);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t; cin>>t; while(t--)
    solve();
}
