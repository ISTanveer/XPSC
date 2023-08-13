#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c; cin>>a>>b>>c;
    if(c%2==0) {
        if(b%2==0){
            if(a%2==0){
                cout<<0<<endl;
            }
            else cout<<1<<endl;
        }
        else{
            if(a%2==0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
    else{
        if(b%2==1){
            if(a%2==1){
                cout<<0<<endl;
            }
            else cout<<1<<endl;
        }
        else{
            if(a%2==1){
                cout<<0<<endl;
            }
            else cout<<1<<endl;
        }
    }
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
