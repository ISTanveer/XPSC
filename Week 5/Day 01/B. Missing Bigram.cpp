#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<string> v(n-2);
    for(int i=0; i<n-2; i++){
        cin>>v[i];
    }
    string tem = v[0];
    for(int i=1; i<n-2; i++){
            if(v[i-1][1]==v[i][0]){
                tem +=v[i][1];
            }
            else tem += v[i];
    }
    if(tem.size()==n) cout<<tem<<endl;
    else cout<<tem+'a'<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
