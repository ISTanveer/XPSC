#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; string s; cin>>s;
        vector<int> pre(n, 0), suf(n,0);
        set<char> st;
        for(int i=0; i<n; i++)
        {
            st.insert(s[i]);
            pre[i] = st.size();
        }
        st.clear();
        for(int i=n-1; i>=0; i--)
        {
            st.insert(s[i]);
            suf[i] = st.size();
        }
        int ans=0;
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans, (pre[i]+suf[i+1]));
        }
        cout<<ans<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}
