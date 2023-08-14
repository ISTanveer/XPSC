#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    string tem = s;
    sort(tem.begin(), tem.end());
    if(tem==s){
        cout<<0<<endl;
        return;
    }
    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        if(s[i]!=tem[i]){
            ans.push_back(i+1);
        }
    }
    cout<<1<<endl;
    cout<<ans.size()<<" ";
    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
