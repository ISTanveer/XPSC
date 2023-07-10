#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    if(n%k==0){
        cout<<"YES"<<endl;
        int dif = n/k;
        while(k--) cout<<dif<<" ";
        cout<<endl;
    }
    else{

            int tem = 2*(k-1);
            int c = n-tem;
            if(c>0&&c%2==0) {
                cout<<"YES"<<endl;
                cout<<c<<" ";
                k--;
                while(k--) cout<<2<<" ";
                cout<<endl;
                return;
            }

            int c2 = n - (k-1);
            if(c2>0&&c2%2!=0){
                cout<<"YES"<<endl;
                cout<<c2<<" ";
                k--;
                while(k--) cout<<1<<" ";
                cout<<endl;
                return;
            }
            cout<<"NO"<<endl;

    }
}

int main()
{

    int t; cin>>t; while(t--)
    solve();
    return 0;
}
