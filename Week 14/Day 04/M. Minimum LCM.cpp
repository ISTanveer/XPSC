#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n; cin>>n;
    if(n%2)
    {
        vector<long long> div;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0){
                if(i==(n/i)){
                    div.push_back(i); continue;
                }
                div.push_back(i);
                div.push_back(n/i);
            }
        }
        int a=1, b=n-1, ans=n;
        //for(auto i:div) cout<<i<<" "; cout<<'\n';
        for(int i=0; i<div.size(); i++)
        {
            long long tem = n-div[i];
            long long lcm = (div[i]*tem)/(__gcd(div[i], tem));
            if(ans>lcm){
                ans = lcm;
                a = div[i]; b = tem;
            }
        }
        cout<<a<<" "<<b<<"\n";
    }
    else{
        cout<<n/2<<" "<<n/2<<"\n";
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
