#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<pair<int, int> > v(n);
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        v.push_back({a, i+1});
    }
    sort(v.rbegin(), v.rend());
    vector<int> ans(n+1);
    long long start;
    if((n+1)%2==0) {
        start = (n+1)/2;
        start--;
    }
    else start = (n+1)/2;
    ans[0] = start;
    long long sum=0;
    long long i=start-1, j = start+1, k=0;
    while(k<n)
    {
        if(i>=0&&k<n){
            ans[v[k].second] = i;
            long long tem = abs(start-i);
            tem = tem*2*v[k].first;
            sum+= tem;
            k++, i--;
        }
        if(j<=n&&k<n){
            ans[v[k].second] = j;
            long long tem = abs(start-j);
            tem = tem*2*v[k].first;
            sum+= tem;
            j++, k++;
        }
    }
    cout<<sum<<endl;
    for(auto i:ans) cout<<i+1<<" ";
    cout<<endl;

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
