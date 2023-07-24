#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int x, y;
    cin>>x>>y;
    if(x==y){
        if(x%2==0){
            cout<<"CHEFINA\n";
            return;
        }
        else {
            cout<<"CHEF\n";
            return;
        }
    }
    int dif = abs(x-y);
    if(dif>=2)
    {
        if(x>y)
        {
            cout<<"CHEF\n";
            return;
        }
        else{
            cout<<"CHEFINA\n";
            return;
        }
    }
    else{
        if(x>y){
            if(x%2==0) cout<<"CHEF\n";
            else cout<<"CHEFINA\n";
        }
        else{
            if(y%2==0) cout<<"CHEF\n";
            else cout<<"CHEFINA\n";
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
