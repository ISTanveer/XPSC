#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
    int a[n][m]; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int ans = -1;

    for(int i=0; i<n; i++){
        
        for(int j=0; j<m; j++){

            int k=i, l = j, sum = 0;
            while(k<n&&l<m){
                sum += a[k][l];
                k++;
                l++;
            }
            k = i-1, l = j-1;
            while(k>=0&&l>=0){
                sum +=a[k][l];
                k--;
                l--;
            }
            k = i-1, l=j+1;
            while(k>=0&&l<m){
                sum +=a[k][l];
                k--;
                l++;
            }
            k = i+1, l = j-1;
            while(k<n&&l>=0){
                sum +=a[k][l];
                k++;
                l--;
            }
        ans = max(ans, sum);
        }
        
    }
    cout<<ans<<endl;
    }
    return 0;
}