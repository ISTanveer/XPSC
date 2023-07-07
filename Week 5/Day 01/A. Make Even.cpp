#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin>>s;
    int n = s.size();
    int last = s[n-1]-'0';
    int fast = s[0]-'0';
    if(last%2==0) cout<<0<<endl;
    else if(fast%2==0) cout<<1<<endl;
    else{
        bool flag = false;
        for(int i=1; i<n-1; i++){
            int tem = s[i]-'0';
            if(tem%2==0){
                flag = true;
                break;
            }
        }
        if(flag) cout<<2<<endl;
        else cout<<-1<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
