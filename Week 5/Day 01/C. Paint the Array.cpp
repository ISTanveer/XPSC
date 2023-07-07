#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    long long g = v[0];
    for(int i=2; i<n; i+=2)
    {
        g = __gcd(g, v[i]);
    }
    bool flag = true;
    if(g>1)
    {
        for(int i=1; i<n; i+=2)
        {
            if(v[i]%g==0)
            {
                flag =false;
                break;
            }
        }
        if(flag)
        {
            cout<<g<<endl;
            return ;
        }

    }

    g = v[1];
    for(int i=3; i<n; i+=2)
    {
        g = __gcd(g, v[i]);
    }
     flag = true;
    if(g>1)
    {
        for(int i=0; i<n; i+=2)
        {
            if(v[i]%g==0)
            {
                flag =false;
                break;
            }
        }
        if(flag) {
            cout<<g<<endl;
            return;
        }
    }
    cout<<0<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
