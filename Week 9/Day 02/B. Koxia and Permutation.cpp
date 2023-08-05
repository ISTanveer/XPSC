#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    vector<int> v(n+1, 0);
    int top = n, tem = 1;
    int m= n-k+1;
    for(int i=1; i<=n; i++)
    {
        v[i] = top;
        if(i+1<=n) {
            v[i+1] = tem;
            i++;
        }
        top--, tem++;
    }
    for(int i=1; i<=n; i++) cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
