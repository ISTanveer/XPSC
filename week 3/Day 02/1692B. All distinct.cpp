#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,int> mp;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        int even = 0, odd=0;
        for(auto i:mp){
            if(i.second%2!=0) odd++;
            else even++;
        }
        if(even<=1) cout<<odd<<endl;
        else cout<<odd+2<<endl;

}
}
