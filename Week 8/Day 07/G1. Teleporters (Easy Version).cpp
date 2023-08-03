#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    vector<int> v(n+1), ans;
    for(int i=1; i<=n;i++){
        cin>>v[i];
        ans.push_back(v[i]+i);
    }
    sort(ans.begin(), ans.end());
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(ans[i]<=k){
            cnt++;
            k -=ans[i];
        }
        else break;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
