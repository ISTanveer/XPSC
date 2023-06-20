#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    set<string> st;
    for(int i=0, j=1; j<n; i++, j++){
        string tem = "";
        tem +=s[i];
        tem +=s[j];
        st.insert(tem);
    }
    cout<<st.size()<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
        solve();
    return 0;
}
