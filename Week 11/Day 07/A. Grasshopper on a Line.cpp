#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x, k; cin>>x>>k;
    if(x<k){
        cout<<1<<endl;
        cout<<x<<endl;
        return;
    }
    else {
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
            return;
        }
        else{
            int tem = x;
            int rem = x-tem;
            while(rem%k==0||tem%k==0){
                tem--;
                rem = x-tem;
            }
            cout<<2<<endl;
            cout<<tem<<" "<<rem<<endl;
            return;
        }
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
