#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int hashing(string s, int base)
{
    int val = 1;
    int sum = 0;
    for(int i=0; i<s.size(); i++)
    {
        int tem = s[i]-'a';
        sum = (sum + (tem*val)%mod)%mod;
        val = (val*base)%mod;
    }
    return sum;
}
void solve()
{
    int n; cin>>n;
    set< pair<int, int> > st;
    for(int i=0; i<n; i++)
    {
        string s; cin>>s;
        st.insert({hashing(s, 2), hashing(s, 3)});

    }
    int m; cin>>m;
    for(int i=0; i<m; i++)
    {
        string s; cin>>s;
        if(st.find({hashing(s, 2), hashing(s, 3)})!=st.end()){
            cout<<"yes\n";
        }
        else cout<<"no\n";
    }
}

int main()
{
    solve();
    return 0;
}
