#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    long long odd = 0, even = 0, sum=0;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(i%2!=0) odd +=v[i];
        sum +=v[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0){
            even = sum-odd-v[i];
        }
        else odd = sum-even-v[i];
        if(even==odd) ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
    return 0;
}
