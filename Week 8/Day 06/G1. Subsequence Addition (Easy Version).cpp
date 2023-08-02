#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    if(v[0]!=1){
        cout<<"NO\n";
        return;
    }
    for(int i=1; i<n; i++)
    {
        int s = v[i], sum=0;
        bool flag = true;
        for(int j=i-1; j>=0; j--)
        {
            if((sum+v[j])<=s) sum+=v[j];
            if(sum==s) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
