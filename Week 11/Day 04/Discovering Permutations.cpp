// Add some code
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin>>n>>k;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<char> v(n);
    for(int i=0; i<n; i++)
    {
        v[i] = s[i];
    }
    do{
        for(int i=0; i<n; i++) cout<<v[i];
        cout<<endl;
        k--;
        if(k==0) return;
    }while(next_permutation(v.begin(), v.end())&&k!=0);
}

int main()
{
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"Case "<<i<<":\n";
        solve();
    }
    return 0;
}
