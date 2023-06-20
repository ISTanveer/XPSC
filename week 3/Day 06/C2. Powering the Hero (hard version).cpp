#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;

    priority_queue<int> pq;
    long long ans = 0;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        if(val==0){
            if(pq.empty()) continue;
            ans+=pq.top();
            pq.pop();
        }
        else{
            pq.push(val);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
        solve();
    return 0;
}

