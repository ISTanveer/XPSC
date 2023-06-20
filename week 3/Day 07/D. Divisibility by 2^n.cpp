#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int two = n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        int j = 1, cnt = 0;
        long long p = pow(2, 1);
        while(v[i]%p==0)
        {
            cnt ++;
            j++;
            p = pow(2, j);
        }
        two -=cnt;
    }
    if(two<=0) cout<<0<<endl;
    else{
        vector<int> ind;
        for(int i=2; i<=n; i++){
            int j=i, k = 0;
            while(j%2==0){
                k++;
                j/=2;
            }
            if(k>0) ind.push_back(k);
        }
        sort(ind.rbegin(), ind.rend());
        int op = 0;
        for(int i=0; i<ind.size(); i++){
            two -= ind[i];
            op++;
            if(two<=0) break;
        }
        if(two>0) cout<<-1<<endl;
        else cout<<op<<endl;
    }


}

int main()
{
    int t; cin>>t; while(t--)
    solve();

    return 0;
}
