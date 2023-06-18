#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    bool flag = false;
    int cnt = 4;
    while(cnt){
        if((b<d&&a<c)&&(a<b&&c<d)){
                flag = true;
                break;
        }
        int tem = a;
        a = c;
        c = d;
        d = b;
        b = tem;
        cnt--;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
