#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    if(n%2){
        if(n==1){
            cout<<1<<endl;
            return;
        }
        cout<<-1<<endl;
        return;
    }
    int sum=0, i=0, j=n-1;
    bool flag = true;
    while(i<=j){
        if(flag){
            int cur = 0;
            if(i<=sum){
                cur = n+i-sum;
            }
            else cur = i-sum;
            sum = i;
            cout<<cur<<" ";
            i++, flag = false;
        }
        else{
            int cur = 0;
            if(j<=sum){
                cur = n+j-sum;
            }
            else cur = j-sum;
            cout<<cur<<" ";
            sum = j;
            j--, flag = true;
        }
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
