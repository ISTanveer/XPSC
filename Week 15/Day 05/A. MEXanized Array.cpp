#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, x; cin>>n>>k>>x;
    if(n<k){
        cout<<-1<<endl; return;
    }
    if(k>x+1){
        cout<<-1<<endl; return;
    }
    int tem = k-1;
    int sum = (tem*(tem+1))/2;
    n-=tem+1;
    while(n!=0){
        if(x!=k) sum+=x;
        else sum+=(x-1); n--;
    }
    cout<<sum<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
