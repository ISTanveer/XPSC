#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    set<char> st;
    int cnt = 0;
    for(int i=0; i<s.size(); i++)
    {
        st.insert(s[i]);
        if(st.size()==4){
            cnt++;
            i--;
            st.clear();
        }
    }
    cnt++;
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
