#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, x; cin>>n>>x;
    map<long long, long long> mp;
    for(int i=0; i<n; i++)
    {
        long long ab; cin>>ab;
        mp[ab]++;
    }
    //for(auto [a, b]:mp) cout<<a<<" "<<b<<endl;
    long long cnt=0;
    for(auto [a, b]:mp)
    {
        if(b>0){
            long long tem = a*x;
            if(mp[tem]>0){
                if(mp[tem]>=b){
                    mp[tem]-=b;
                    b = 0;
                }
                else{
                    b-=mp[tem];
                    mp[tem] = 0;
                }
                cnt+=b;
            }
            else cnt+=b;
            //cout<<cnt<<" "<<mp[tem]<<" "<<b<<endl;
        }
        //cout<<cnt<<endl;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
