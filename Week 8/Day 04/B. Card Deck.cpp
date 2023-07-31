#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int>v(n), s(n);
    map<int, bool> mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]] = true;
    }
    s = v;
    sort(s.rbegin(), s.rend());
    int j=0;
    vector<int> tem, ans;
    for(int i=n-1; i>=0; i--)
    {
        if(v[i]!=s[j]){
            mp[v[i]] = false;
            tem.push_back(v[i]);
        }
        else{
            //mp[v[i]] = false;
            ans.push_back(v[i]);
            reverse(tem.begin(), tem.end());
            for(int i=0; i<tem.size(); i++){
                ans.push_back(tem[i]);
            }
            tem.clear();
            j++;
            while(j<n){
                if(mp[s[j]]==true) break;
                j++;
            }
        }

    }
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
