#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> pos(n+1);
    for(int i=1; i<=n; i++)
    {
        int a; cin>>a;
        pos[a] = i;
    }
    if(pos[n]<min(pos[1], pos[2])) cout<<pos[n]<<" "<<min(pos[1], pos[2])<<endl;
    else if(pos[n]>max(pos[1], pos[2])) cout<<pos[n]<<" "<<max(pos[1], pos[2])<<endl;
    else cout<<pos[1]<<" "<<pos[2]<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
