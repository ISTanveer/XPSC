#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    map<int, int> mp;
    int mx = -1;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        mp[a] = i;
        mx = max(mx, a);
    }
    int cnt = 0;

    while(mx!=1)
    {
        if(mp[mx]>mp[mx-1]){
            mx--;
        }
        else{
            cnt++;
            mx--;
        }
    }
    cout<<cnt<<endl;

}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
