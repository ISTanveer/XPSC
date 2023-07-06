#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s, t; cin>>s>>t;
    if(t=="a") cout<<1<<endl;
    else{
        bool flag = true;
        for(int i=0; i<t.size(); i++)
        {
            if(t[i]=='a') {
                flag = false;
                break;
            }
        }
      if(flag) {
        int n = s.size();
        long long ans = 1;
        while(n!=0)
        {
            ans *=2;
            n--;
        }
        cout<<ans<<endl;
      }
      else cout<<-1<<endl;
    }
}

int main()
{
    int q; cin>>q; while(q--)
    solve();
    return 0;
}
