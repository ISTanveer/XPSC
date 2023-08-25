#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> q(n, -1);
    bool flag = true, flag2 = true;
    int f = v[0], b = v[0];
    for(int i=0; i<n; i++)
    {
        if(i==0) {
            q[i] = v[i];
            continue;
        }

        if(b<=v[i]&&flag){
            q[i] = v[i];
            b = q[i];
            continue;
        }
        if(v[i]<=f&&flag2){
            q[i] = v[i];
            b= q[i];
            flag2 = false; flag = false;
            continue;
        }
        if(v[i]<=f&&b<=v[i]){
            q[i] = v[i];
            b = q[i];
            //flag = false;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(q[i]==-1)cout<<0;
        else cout<<1;
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
