#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int> v1(n);
    for(int i=0; i<n; i++) cin>>v1[i];
    vector<int> v2(m);
    for(int i=0; i<m; i++) cin>>v2[i];

    int i=0, j=0;
    while(i<n&&j<m)
    {
        if(v1[i]<=v2[j])
        {
            cout<<v1[i]<<" ";
            i++;
        }
        else
        {
            cout<<v2[j]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<v1[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<v2[j]<<" ";
        j++;
    }
    cout<<'\n';
}

int main()
{
    solve();
    return 0;
}
