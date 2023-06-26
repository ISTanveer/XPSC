#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n ; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    string s; cin>>s;
    vector<char> ans(n);
    for(int i=0; i<n; i++)
    {
        ans[i] = s[i];
        for(int j=0; j<n; j++)
        {
            if(v[i]==v[j]){
                ans[j] = s[i];
            }
        }
    }
    for(int i=0; i<n; i++){
      if(s[i]!=ans[i]){
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
