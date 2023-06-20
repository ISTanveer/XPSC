#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    vector<char> ans(n);
    string s; cin>>s;
    for(int i=0;i<s.size(); i++){
        char tem = s[i];
        int val = v[i];
        for(int j=0; j<n; j++){
            if(v[j]==val){
                ans[j] = tem;
            }

        }
    }
    for(int i=0; i<n; i++){
        if(s[i]!=ans[i]) {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
