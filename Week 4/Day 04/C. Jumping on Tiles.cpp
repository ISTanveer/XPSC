#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    vector<int> ind[26];
    for(int i=0; i<s.size(); i++){
        ind[s[i]-'a'].push_back(i);
    }
    vector<int> ans;
    int n = s.size();
    int sum = 0;
    int r1 = s[0] -'a';
    int r2 = s[s.size()-1] - 'a';

    if(r1>r2){
        for(int i=25; i>=0; i--){
            if(i<=r1&&i>=r2){
                for(int j=0; j<ind[i].size(); j++)
                {
                    ans.push_back(ind[i][j]);
                }
            }
        }
    }
    else{
        for(int i=0; i<26; i++){
            if(i>=r1&&i<=r2){
                for(int j=0; j<ind[i].size(); j++)
                {
                    ans.push_back(ind[i][j]);
                }
            }
        }
    }

    for(int i=1; i<ans.size(); i++){
        sum += abs(s[ans[i]]-s[ans[i-1]]);
    }
    cout<<sum<<" "<<ans.size()<<endl;
    for(auto i:ans) cout<<i+1<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
