#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m; cin>>n>>m;
    vector<int> ans;
    int sum = 1, k = 0;
    while(sum <= m)
    {

        ans.push_back(sum);
         k++;
        sum +=k;

    }
    int tem = ans.back();
    int sz = ans.size();
    int r1 = n-sz, r2 = m-tem;
    while(r1>r2){
        ans.pop_back();
        r1++;
        tem = ans.back();
        r2 = m-tem;
    }
    sz = ans.size();
    int l = 1;
    while(sz<n){
        ans.push_back(tem+l);
        l++;
        sz++;
    }
    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
        solve();
    return 0;
}
