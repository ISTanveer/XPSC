#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y; cin>>x>>y;
    int bx, by; cin>>bx>>by;
    int cx, cy; cin>>cx>>cy;
    int cnt=1;
    if(x<bx&&x<cx){
        int rem = min(bx, cx);
        cnt +=(rem-x);
    }
    if(x>bx&&x>cx){
        int rem = max(bx, cx);
        cnt += (x-rem);
    }
    if(y<by&&y<cy){
        int rem = min(by, cy);
        cnt +=(rem-y);
    }
    if(y>by&&y>cy){
        int rem = max(by, cy);
        cnt += (y-rem);
    }
    cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
