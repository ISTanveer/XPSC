#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vector<int> tem(n);
    long long cnt = v[0]-1;
    tem[0] = v[0];
    int take = 2;
    for(int i=1; i<n; i++)
    {
        if(v[i]<take){
            tem[i]=v[i];
        }
        else{
            tem[i] = take;
            take++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cnt+= (v[i]-tem[i]);
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
