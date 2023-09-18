#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int ans=0;
    int i=0, j=0;
    set<int> st;
    while(i<n&&j<n)
    {
        while(j<n&&!st.count(v[j]))
        {
            st.insert(v[j]);
            ans = max(ans, j-i+1);
            j++;
        }
        while(i<n&&st.count(v[j])){
            st.erase(v[i]);
            i++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}
