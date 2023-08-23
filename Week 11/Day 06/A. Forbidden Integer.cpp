#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x, k, n; cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES\n";cout<<n<<endl;
        for(int i=1; i<=n; i++){
            cout<<1<<" ";
        }
        cout<<"\n"; return;
    }
    if(n%2==0&&k>=2){
        cout<<"YES\n"; cout<<n/2<<endl;
        for(int i=0; i<n/2; i++) cout<<2<<" ";
        cout<<endl; return;
    }
    if(n%3==0&&k>=3){
        cout<<"YES\n"; cout<<n/3<<endl;
        for(int i=0; i<n/3; i++) cout<<3<<" ";
        cout<<endl; return;
    }
    if(n%2==1&&k>=3){
        cout<<"YES\n"; cout<<n/2<<endl;
        cout<<3<<" ";
        for(int i=0; i<n/2-1; i++) cout<<2<<" ";
        cout<<endl; return;
    }
    int rem = n%3;
    if(rem==2&&k>=3){
        cout<<"YES\n"; cout<<n/3+1<<endl;
        cout<<2<<" ";
        for(int i=0; i<n/3; i++) cout<<3<<" ";
        cout<<endl; return;
    }
    if(rem==1&&k>=3){
        cout<<"YES\n"; cout<<n/3<<endl;
        cout<<2<<" "<<2<<" ";
        for(int i=0; i<n/3-1; i++) cout<<3<<" ";
        cout<<endl; return;
    }
    cout<<"NO\n";
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
