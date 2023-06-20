#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    if(n%2==0){
        while(n!=0){
            cout<<n<<" ";
            n--;
        }
        cout<<endl;
    }
    else{
        if(n==3) cout<<-1<<endl;
    else{
        vector<int> v(n);
        v[n/2] = n;
        int a = n-1;
        for(int i=n/2-1; i>=0; i--){
            v[i] = a;
            a--;
        }
        for(int i=n/2+1; i<n; i++){
            v[i] = a;
            a--;
        }
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
    }
    }
}

int main()
{

   int t; cin>>t; while(t--)
    solve();
    return 0;
}
