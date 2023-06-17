#include <bits/stdc++.h>
using namespace std;


int main() 
{
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
        map<string , bool>mp;
    vector<string> v(n); for(int i=0; i<n; i++) 
    {
        cin>>v[i];
        mp[v[i]] = true;
    }

    vector<int> ans(n, 0);

    
    for( int i=0; i<n; i++){
        string s = v[i];
        
        for(int k = 1; k<s.size(); k++){
            string s1 = "", s2 = "";
            for(int j=0; j<s.size(); j++)
            {
                if(j<k) s1 +=s[j];
                else s2 +=s[j];
            }
        //cout<<s1<<" "<<s2<<endl;
        if(mp[s1] && mp[s2]) {
            ans[i] = 1 ; 
            break;
        } 
        }
    }

   for(auto i:ans)cout<<i;
    cout<<endl;
   }

    return 0;
}