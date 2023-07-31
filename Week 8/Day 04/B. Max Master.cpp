//https://codeforces.com/problemset/problem/1806/B
//B. Mex Master
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int a[n];
        int zero = 0, N_zero = 0;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]==0) zero++;
            else N_zero++;
        }
        if(zero <= N_zero+1){
            cout<<"0"<<endl;
        }
        else{
            int ma = -1;
            for(int i=0; i<n; i++){
                if(ma<a[i]) ma = a[i];

            }
             if(ma==1) cout<<"2"<<endl;
            else cout<<"1"<<endl;
        }
    }

    return 0;
}
