#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int l, r; cin>>l>>r;
    int ans = 0, luck = l;
    while(l<=r){
        string s = to_string(l);
        sort(s.begin(), s.end());
        int first = s[0] - '0';
        int last = s[s.size()-1] - '0';
        if(last-first>ans) {
            luck = l;
            ans = last-first;
        }
        if(ans==9) {
            break;
        }
        l++;
    }
    cout<<luck<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
