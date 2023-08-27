#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m; cin>>n>>m;
    multiset<int, greater<int> > pq;
    vector<int> ans;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        if(sum+a<=m){
            sum+=a;
            ans.push_back(0);
            pq.insert(a);
        }
        else{
            sum+=a;
            long long tem = sum;
            int cnt=0;
            for(auto p:pq){
                tem-=p;
                cnt++;
                if(tem<=m) break;
            }
            pq.insert(a);
            ans.push_back(cnt);
        }
    }
//    for(auto m:pq) cout<<m<<" ";
//    cout<<endl;
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
