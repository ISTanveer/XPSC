#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    int cnt=0, i=n-1, j=n-2;
    while(j>=0)
    {
        if(v[i]<v[j]){
            cnt++;
            i = j;
        }
        j--;
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
