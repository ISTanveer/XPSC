#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int > v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int i=0, j = n-1;
    int sum = 0;
    while(i<j){
        sum += (abs(v[i]-v[j]));
        i++;
        j--;
    }
    cout<<sum<<endl;
}
int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}

