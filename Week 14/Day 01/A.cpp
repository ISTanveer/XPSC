#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c; cin>>a>>b>>c;
    int ans =0;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    int tem = abs(a-b), rem;
    if(tem%2==0){
        rem = tem/2;
    }
    else rem = tem/2 + 1;
    if(rem%c==0){
        cout<<rem/c<<endl;
    }
    else cout<<rem/c + 1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
