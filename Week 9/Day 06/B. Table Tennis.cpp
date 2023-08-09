#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k; cin>>n>>k;
    queue<int> q;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        q.push(a);
    }
    int first = q.front();
    q.pop();
    int cnt = 0;
    while(1)
    {
        int second = q.front();
        q.pop();
        if(first>second){
            cnt++;
            if(cnt==k||cnt==n){
                cout<<first<<endl;
                return;
            }
            q.push(second);
        }
        else{
            q.push(first);
            first = second;
            cnt = 1;
        }
    }
}

int main()
{
    solve();
    return 0;
}
