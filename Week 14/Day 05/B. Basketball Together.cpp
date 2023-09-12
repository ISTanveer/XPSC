#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, d; cin>>n>>d;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int team = 0, tem;
    for(int i=-1, j=n-1; i<j;)
    {
       if((d+1)%v[j]){
         tem = (d+1)/v[j];
       }
       else {
        tem = (d+1)/v[j]; tem--;
       }

        i+=tem;  if(i<j) team++;
        j--;
    }
    cout<<team<<endl;
}

int main()
{
    solve();
    return 0;
}
