#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x; cin>>n>>x;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int ind = n+1, mx = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int cnt=1, tem=v[i];
        while(tem%x==0){
            tem = tem/x;
            cnt++;
        }
        if(mx>cnt){
            mx = cnt;
            ind = i;
        }
    }
    long long sum = 0;
    for(int i=0; i<ind; i++)
    {
        int c = mx+1, p=1;
        long long s=0, tem = v[i];
        while(c--){
            s += (tem*p);
            p*=x; tem /=x;
        }
        //cout<<s<<endl;
        sum+=s;
    }
    for(int i=ind; i<n; i++){
        int c = mx, p=1;
        long long s=0, tem = v[i];
        while(c--){
            s += (tem*p);
            p*=x; tem /=x;
        }
        //cout<<s<<endl;
        sum+=s;
    }
    cout<<sum<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}

