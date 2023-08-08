#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    if(n%3==0) {
        cout<<n/3<<" 0"<<" 0"<<endl;
        return;
    }
    if(n%5==0){
        cout<<"0 "<<n/5<<" 0"<<endl;
        return;
    }
    if(n%7==0){
        cout<<"0 "<<"0 "<<n/7<<endl;
        return;
    }
    if((n-7)%3==0&&(n-7>0)){
        cout<<(n-7)/3<<" 0 1"<<endl;
        return;
    }
    if((n-7)%5==0&&(n-7>0)){
        cout<<"0 "<<(n-7)/5<<" 1"<<endl;
        return;
    }
    if((n-5)%3==0&&(n-5>0)){
        cout<<(n-5)/3<<" 1 0"<<endl;
        return;
    }
    if((n-5)%7==0&&(n-5>0)){
        cout<<"0 1 "<<(n-5)/7<<endl;
        return;
    }
    if((n-3)%5==0&&(n-3>0)){
        cout<<"1 "<<(n-3)/5<<" 0"<<endl;
        return;
    }
    if((n-3)%7==0&&(n-3>0)){
        cout<<"1 0 "<<(n-3)/7<<endl;
        return;
    }
    cout<<-1<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
