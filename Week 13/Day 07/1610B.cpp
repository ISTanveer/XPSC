//https://codeforces.com/problemset/problem/1610/B

#include<bits/stdc++.h>
using namespace std;
bool pal(vector<int> a)
{
    int i=0, j=a.size()-1;
    while(i<j)
    {
        if(a[i]!=a[j]){
            return false;
        }
        i++, j--;
    }
    return true;
}
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int i=0, j=n-1, ans = -1, l, r;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            ans = 1;
            l = v[i], r = v[j];
            break;
        }
        i++, j--;
    }
    if(ans==-1) {
        cout<<"YES\n"; return;
    }
    vector<int> v1, v2;
    for( i=0; i<n; i++)
    {
        if(v[i]==l) continue;
        v1.push_back(v[i]);
    }
    if(pal(v1)){
        cout<<"YES\n"; return;
    }
    for( i=0; i<n; i++)
    {
        if(v[i]==r) continue;
        v2.push_back(v[i]);
    }
    if(pal(v2)){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t; cin>>t; while(t--)
    solve();
}