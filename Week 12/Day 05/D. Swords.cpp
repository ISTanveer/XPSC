#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vector<int> ans;
    for(int i=0; i<n-1; i++)
    {
        ans.push_back(v[n-1]-v[i]);
    }
    sort(ans.begin(), ans.end());
    int z;
    for(int i=0; i<ans.size(); i++)
    {
        if(ans[i]>0) z = ans[i];
    }
    vector<int> div;
    for(int i=1; i*i<= z; i++){
        if(z%i==0){
            if(i!=(z/i)){
                div.push_back(i);
                div.push_back(z/i);
            }
            else div.push_back(i);
        }
    }
    sort(div.rbegin(), div.rend());
    for(int d=0; d<div.size(); d++){
        long long y = 0; bool flag = true;
        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]%div[d]!=0&&ans[i]>0){
                flag = false; break;
            }
            if(ans[i]>0) y += (ans[i]/div[d]);
        }
        if(flag){
            cout<<y<<" "<<div[d]<<endl;
            return;
        }
    }
}

int main()
{
    solve();
    return 0;
}
