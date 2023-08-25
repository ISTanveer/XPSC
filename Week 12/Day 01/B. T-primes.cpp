#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        long long a; cin>>a;
        if(a==1) {
            cout<<"NO\n"; continue;
        }
        long long s = sqrt(a);
        if(s*s==a){
            bool flag = true;
            for(int j=2; j*j<=s; j++){
                if(s%j==0) {
                    flag = false; break;
                }
            }
            if(flag) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
