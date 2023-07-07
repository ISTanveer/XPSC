#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;

    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];

    for(int i=1; i<n; i++)
    {
        if(v[i]!=v[i-1]){
            if(v[i]==v[i+1]&&(i+1)<n) {
                cout<<i<<endl;
                return;
            }
            else if(v[i]==v[i-2]&&(i-2>=0)) {
                cout<<i<<endl;
                return;
            }
            else{
                cout<<i+1<<endl;
                return;
            }
        }
    }


}

int main()
{
    int t; cin>>t ; while(t--)
    solve();
    return 0;
}
