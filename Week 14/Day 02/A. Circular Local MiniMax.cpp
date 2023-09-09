#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    vector<int> ans(n);
    sort(v.begin(), v.end());
//    //ans[0] = v[0]; ans[n-1] = v[n-1];
////    int i1 = 0, i2 = n-1, cnt=0;
////    for(int i=0; i<n; i++)
////    {
////        if(cnt){
////            ans[i] = v[i2];//cout<<i2<<endl;
////            i2--;
////        }
////        else {
////            ans[i] = v[i1];  //cout<<i1<<endl;
////            i1++;
////        }
////        cnt^=1;
////    }


    int i1=0, i2 = n/2+(n%2), cnt=0;
    for(int i=0; i<n; i++)
    {
        if(cnt==0){
            ans[i] = v[i1]; i1++;
        }
        else{
            ans[i] = v[i2]; i2++;
        }
        cnt^=1;
    }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            if(ans[i]>ans[i+1]&&ans[i]>ans[n-1]) continue;
            else if(ans[i]<ans[i+1]&&ans[i]<ans[n-1]) continue;
            else{
                cout<<"NO\n"; return;
            }
        }
        if(i==(n-1))
        {

            if(ans[i]>ans[0]&&ans[i]>ans[i-1]) continue;
            else if(ans[i]<ans[0]&&ans[i]<ans[i-1]) continue;
            else{
                cout<<"NO\n"; return;
            }
        }
        if(ans[i]<ans[i+1]&&ans[i]<ans[i-1]) continue;
        else if(ans[i]>ans[i+1]&&ans[i]>ans[i-1]) continue;
        else{
            cout<<"NO\n"; return;
        }
    }
    cout<<"YES\n";
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
