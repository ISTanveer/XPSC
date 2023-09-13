#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m; cin>>n>>m;
    vector<int> v1(n);for(int i=0; i<n; i++) cin>>v1[i];
    vector<int> v2(m); for(int i=0; i<m; i++) cin>>v2[i];
    int i=0, j=0, cnt=0;
    while(i<n&&j<m)
    {
        while(i<n&&(v1[i]<v2[j])){
            cnt++; i++;
        }
        while(j<m&&i<n&&(v1[i]>=v2[j])){
            cout<<cnt<<" "; j++;
        }
    }
    while(j<m) {
        cout<<cnt<<" "; j++;
    }
    cout<<'\n';

}

int main()
{
    solve();
    return 0;
}
