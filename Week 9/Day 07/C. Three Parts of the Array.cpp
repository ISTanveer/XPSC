#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    long long sum1 = 0, sum2 = 0;
    int i=0, j=n-1, l, r;
    while(i<=j){
        if(sum1>=sum2){
            sum2+=v[j];
            r = j;
            j--;
        }
        else{
            sum1+=v[i];
            l = i;
            i++;
        }
    }
    if(sum1==sum2){
        cout<<sum1<<endl;
        return;
    }
    while(sum1!=sum2){
        if(sum1>sum2){
            sum1-= v[l];
            l--;
        }
        else{
            sum2 -=v[r];
            r++;
        }
    }
    cout<<sum1<<endl;
}

int main()
{
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
