#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int l, r, x;
    cin>>l>>r>>x;
    int a, b;
    cin>>a>>b;

    //deep observation needs for this problem..
    //Must draw the visual of this problem and observe deeply.
    if(a==b) cout<<0<<endl;
    else if(a>b){
        if(a-b>=x) cout<<1<<endl;
        else if(r-a>=x||(b-l)>=x) cout<<2<<endl;
        else if((a-l)>=x&&(r-b)>=x) cout<<3<<endl;
        else cout<<-1<<endl;
    }
    else{
        if(b-a>=x) cout<<1<<endl;
        else if((r-b>=x)||((a-l)>=x)) cout<<2<<endl;
        else if((r-a)>=x&&(b-l)>=x) cout<<3<<endl;
        else cout<<-1<<endl;
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
