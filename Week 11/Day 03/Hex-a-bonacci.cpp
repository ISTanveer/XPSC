// Add some code
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{
    int ts; cin>>ts;
    for(int t=1; t<=ts; t++)
    {
       vector<long long> v(10000, 0);
        for(long long i=0; i<=5; i++) cin>>v[i];
        long long  n; cin>>n;
        for(long long i=6; i<=n;i++)
        {
            v[i] = (v[i-1]+v[i-2]+v[i-3]+v[i-4]+v[i-5]+v[i-6])%10000007;
        }
        cout<<"Case "<<t<<": "<<v[n]%10000007<<"\n";
    }

}
