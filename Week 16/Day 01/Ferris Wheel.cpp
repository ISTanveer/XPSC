#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k; cin>>n>>k;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int cnt=0;
    sort(v.begin(), v.end());
    int i=0, j=n-1; long long sum=0;
    while(i<=j)
    {
        sum = v[j];
        if(sum+v[i]<=k&&i<j){
            i++;
        }
        cnt++; j--;
    }
    cout<<cnt<<endl;
}

int main()
{
    solve();
    return 0;
}
