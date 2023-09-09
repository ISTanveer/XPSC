#include<bits/stdc++.h>
using namespace std;
void SORT(map<int, int> &mp)
{
    multimap<int, int> m;
    //for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    for(auto i:mp)
    m.insert({i.second, i.first});
    for(auto i:m) cout<<i.second<<" ";
    cout<<'\n';
}
void solve()
{
    int n; cin>>n;
    map<int, int> mp;
    deque<int> zero, one;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]] = i;
    }
    //for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    string s; cin>>s;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='1') one.push_back(v[i]);
        else zero.push_back(v[i]);
    }
    sort(one.rbegin(), one.rend()); sort(zero.rbegin(), zero.rend());
    int dd = n;
    while(!one.empty())
    {
        if(dd==one.front()){
            one.pop_front();
        }
        else{
            int big = zero.front();
            int sml = one.back();
            swap(mp[big], mp[sml]);
            zero.pop_front();
            one.pop_back();
        }
        dd--;
    }

    SORT(mp);


}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
/*
8
2 3 1 8 5 4 7 6
01110001

2 7 5 8 1 4 6 3 = my out
1 6 5 8 3 2 4 7 = answer

*/
