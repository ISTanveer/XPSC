#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) {
    cin>>v[i];
    }
    set<int> s;
    int visited = 0;
    for(int i=n-1; i>=0; i--){
        s.insert(v[i]);
        visited++;
        if(visited>s.size()) break;
    }
    cout<<n-s.size()<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
