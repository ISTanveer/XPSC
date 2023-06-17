#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<string, int> mp;
    vector<string> v(n); for(int i=0; i<n; i++) 
    {
        cin>>v[i];
        mp[v[i]] = i;
    }

    vector<int> ans(n, 0);

    for(int i=0; i<n; i++){
        string s1 = v[i];
        for(int j=0; j<n; j++){
            string s2 = v[j];
            string sf = s1+s2;
            if(mp.find(sf) != mp.end()){
                ans[mp[sf]] = 1;
            }
        }
    }


/*
    for(int i=0; i<n; i++){
        string s = v[i];
        bool flag = false;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            string s1 = v[j];
            for(int k=0; k<n; k++){
                if(k==i) continue;
                string s2 = v[k];
                string sf = s1+s2;
                if(sf==s) {
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) ans.push_back(1);
        else ans.push_back(0);
    }
    */
   for(auto i:ans)cout<<i;
    cout<<endl;
    }

    return 0;
}