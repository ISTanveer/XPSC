#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int s; cin>>s;
    int ans = 9;
    vector<int> v;
    while(s!=0)
    {
        if(s>=ans){
            s -=ans;
            v.push_back(ans);
            ans--;
        }
        else{
            v.push_back(s);
            break;
        }
    }
    reverse(v.begin(), v.end());
    for(auto i:v) cout<<i;
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
