#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    vector<int> pre(n); pre[0] = v[0];
    for(int i=1; i<n; i++){
        pre[i] = pre[i-1]^v[i];
    }
    //for n=2;
    {
        for(int i=0; i<n-1; i++)
        {
            if(pre[i]==(pre[n-1]^pre[i])){
                cout<<"YES\n"; return;
            }
        }
    }
    //for n=3;
    {
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                int first = pre[i], mid = pre[j]^pre[i], last = pre[n-1]^pre[j];
                if(first==mid&&mid==last){
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
