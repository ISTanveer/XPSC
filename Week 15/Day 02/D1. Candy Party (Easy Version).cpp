#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n; cin>>n;
    long long sum=0;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%n){
        cout<<"NO\n"; return;
    }
    vector<int> cnt(32, 0);
    long long avg = sum/n;

    for(int i=0; i<n; i++)
    {
        long long tem = v[i]-avg;
        if(tem==0) continue;
        long long x=-1, y=-1;
        for(int j=0; j<31; j++)
        {
            long long t = tem+(1<<j);
            while(t>0&& __builtin_popcountll(t)==1){
                long long p = __builtin_ctzll(t);
                x = j;
                y = p;
                break;
            }
        }
        if(x==-1){
            cout<<"NO\n"; return;
        }
        cnt[x]++, cnt[y]--;
    }
    for(int i=0; i<32; i++) {
        if(cnt[i]){
            cout<<"NO\n"; return;
        }
    }
    cout<<"YES\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
