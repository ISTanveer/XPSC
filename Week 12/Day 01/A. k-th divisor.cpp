#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
void solve()
{
    long long n, k;
    cin>>n>>k;

    for(long long i=1; i*i<=n; i++)
    {
        if(n%i==0){
            long long rem = n/i;
            if(rem!=i){
                v.push_back(i);
                v.push_back(rem);
            }
            else v.push_back(i);
        }
    }
    if(v.size()<k) {
        cout<<-1<<endl;
        return;
    }
    sort(v.begin(), v.end());
    cout<<v[k-1]<<endl;
}
int main()
{
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
