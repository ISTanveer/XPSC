#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k, h; cin>>n>>m>>k>>h;
    vector<int> tem(m+1);
    for(int i=1; i<=m; i++)
    {
        tem[i] = i*k;
    }
    int cnt=0, ran= tem[m]-tem[1];
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        int dif = abs(a-h);
        for(int j=1; j<=m; j++)
        {
            if(dif==tem[j]&&ran>=dif){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
