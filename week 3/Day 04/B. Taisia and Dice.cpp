#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, s, r;    cin>>n>>s>>r;
    vector<int> v(n);
    v[0] = s-r;
    int tem = r/(n-1);
    for(int i=1;i<n; i++)
    {
        v[i] = tem;
    }
    int rem = r%(n-1);
    int j = 1;
    while(rem!=0){
        v[j]++;
        rem--;
        j++;
    }
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
