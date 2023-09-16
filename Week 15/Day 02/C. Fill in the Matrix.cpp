#include<bits/stdc++.h>
using namespace std;
int n, m;
int mx(set<int> &ss)
{
    int i=0;
    for(int i=0; ; i++)
    {
        if(ss.find(i)==ss.end()) {
            //cout<<i<<endl;
            return i;
        }
    }
}
int getmx(vector<vector<int> > &v)
{
    set<int> st;
    for(int i=0; i<m; i++)
    {
        set<int> ss;
        for(int j=0; j<n; j++)
        {
            ss.insert(v[j][i]);
        }
        st.insert(mx(ss));
    }
    return mx(st);
}
void change(vector<int> &v, int x)
{
    deque<int> d;
    for(int i=0; i<v.size(); i++){
        d.push_back(v[i]);
    }
    while(x--)
    {
        d.push_front(d.back());
        d.pop_back();
    }
    v = vector<int> (d.begin(), d.end());
}
void solve()
{
    cin>>n>>m;
    vector<vector<int> > v(n);
    vector<int> tem(m);
    for(int i=0; i<m; i++){
        tem[i] = i;
    }
    for(int i=0; i<n; i++)
    {
        v[i] = tem;
    }
    if(m>1){
        int x=1;
        for(int i=0; i<n; i++)
        {
            change(v[i], x);
            if(x==m-1) continue;
            x++;
        }
    }
    cout<<getmx(v)<<"\n";
    for(auto ff:v)
    {
        for(auto ss:ff) cout<<ss<<" ";
        cout<<'\n';
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
