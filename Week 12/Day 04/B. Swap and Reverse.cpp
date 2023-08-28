#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    string s; cin>>s;
    if(k%2==0){
        sort(s.begin(), s.end());
        cout<<s<<endl;
        return;
    }
    string odd, even;
    for(int i=0; i<n; i++)
    {
        if((i+1)%2) odd+=s[i];
        else even+=s[i];
    }
    vector<char> ans(n);
    sort(odd.begin(), odd.end()); sort(even.begin(), even.end());
    int o=0, e=0;
    for(int i=0; i<n; i++)
    {
        if((i+1)%2){
            ans[i] = odd[o]; o++;
        }
        else{
            ans[i] = even[e]; e++;
        }
    }

    for(auto i:ans) cout<<i;
    cout<<endl;
}

int main()
{
   int t; cin>>t; while(t--)
    solve();
    return 0;
}
