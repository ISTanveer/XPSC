#include<bits/stdc++.h>
using namespace std;
void solve(){
int n, k; cin>>n>>k;
if(k>30){
    cout<<0<<endl;
    return;
}
int cnt=0;
for(int i=0; i<=n; i++)
{
    int second = n;
    int first = i;
    bool flag = true;
    for(int j=0; j<k-2; j++)
    {
        int tem = second-first;
        second = first;
        first = tem;
        if(first>second||tem<0){
            flag = false;
            break;
        }
    }
    if(flag) cnt++;
}
cout<<cnt<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
