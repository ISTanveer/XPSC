#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    long long mx = -1;
    vector<long long> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mx = max(mx, v[i]);
    }
    long long tem = 0;
    while(mx!=0){
        tem++;
        mx /=2;
    }
    long long cnt = 0;
    for(int i=0; i<n; i++){
        long long rem = v[i], c = 0;
        while(rem!=0){
            c++;
            rem /=2;
        }
        if(tem==c) cnt++;
    }
    if(cnt%2==0) cout<<cnt/2<<endl;
    else
    cout<<(cnt+1)/2<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}

