#include<bits/stdc++.h>
using namespace std;


int main()
{
int t; cin>>t;
while(t--){
    int n ;cin>>n;
    int mx = -1;
    vector<int> v(n); for(int i=0; i<n; i++) {
      cin>>v[i];
      mx = max(mx, v[i]);
    }
    vector<int> fq(mx+1, 0);
    for(int i=0; i<n; i++){
        fq[v[i]]++;
    }
    bool flag = true;
    for(int i=0; i<=mx; i++){
        if(fq[i]>=3) {
            cout<<i<<endl;
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<-1<<endl;
}
    return 0;
}
