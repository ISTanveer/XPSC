 #include<bits/stdc++.h>
 using namespace std;
 void solve()
 {
     int n; cin>>n; vector<int> v(n);
     long long sum = 0;
     for(int i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
     }
     long long ans = sum;
     for(int i=0; i<(1<<n); i++)
     {
         long long tem = 0;
         for(int j=0; j<n; j++)
         {
             if(i&(1<<j)){
                tem+=v[j];
             }
         }
         long long r = abs(2*tem - sum);
         ans = min(ans, r);
     }
     cout<<ans<<endl;
 }

 int main()
 {
     solve();
     return 0;
 }
