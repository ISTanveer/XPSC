#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    map<string, long long> mp;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    long long cnt = 0;
    for(int i=0; i<n; i++){
        string s = v[i];
        vector<string> com;
        char c = 'a';
        while(c<='k'){
            s[0] = c;
            c++;
            if(s==v[i]) continue;
            com.push_back(s);
        }
        s = v[i];
        c = 'a';
        while(c<='k'){
            s[1] = c;
            c++;
            if(s==v[i]) continue;
            com.push_back(s);
        }
        for(int i=0; i<com.size(); i++){
            if(mp.find(com[i])!=mp.end()) {
                cnt += mp[com[i]];
            }
        }
        //cout<<cnt<<endl;
    }
    cout<<cnt/2<<endl; //I am weak to understand this line. it consume 1 days to implement.
}

int main()
{
    int t; cin>>t; while(t--)
     solve();
    return 0;
}
