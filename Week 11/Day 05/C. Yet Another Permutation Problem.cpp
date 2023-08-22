#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    //int cnt = n/2;
    vector<bool> visit(n+1, true);
    for(int i=1; i<=n; i++)
    {
        int j=i;
        while(j<=n)
        {
            if(visit[j])
            {
                cout<<j<<" ";
                visit[j]= false;
            }
            j*=2;
        }
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
