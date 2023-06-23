#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
stack<string> stk;
map<string, bool> mp;
while(n--){
    string s; cin>>s;
    string tem = "";
//    tem += s[s.size()-2];
//    tem +=s[s.size()-1];
    stk.push(s);
    mp[s] = true;
}
//for(auto m:mp) cout<<m.first<<" "<<m.second<<endl;
//cout<<endl;
 while(!stk.empty()){
    if(mp[stk.top()]==true){
        string t = stk.top();
        cout<<t[t.size()-2]<<t[t.size()-1];
        mp[stk.top()] = false;
        //cout<<stk.top()<<" "<<mp[stk.top()]<<endl;
        stk.pop();
    }
    else stk.pop();
 }

}


