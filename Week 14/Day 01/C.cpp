#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r; cin>>l>>r;
    if(abs(l-r)>0){
        if(r%2==0&&r-2>0)
        {
            cout<<2<<" "<<r-2<<endl;
            return;
        }
        r--;
        if(r%2==0&&r-2>0)
        {
            cout<<2<<" "<<r-2<<endl;
            return;
        }
        cout<<-1<<endl;
        return;
    }
    for(int i=2; i*i<=l; i++)
    {
        if(l%i==0){
            cout<<i<<" "<<l-i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
