#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    if((a[0]!=b[0])||(a[n-1]!=b[n-1])) {
        cout<<"NO\n";
        return;
    }
    for(int i=1; i<n-1; i++)
    {
        if(a[i]==1&&b[i]==0)
        {
            cout<<"NO\n";
            return;
        }
        else if(a[i]==0&&b[i]==1)
        {
            bool flag = true;
            for(int j=i-1; j>=0; j--)
            {
                if(a[j]==1)
                {
                    flag=false;
                    break;
                }
            }
            for(int j=i+1; j<n; j++)
            {
                if(a[j]==1)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout<<"NO\n";
                return;
            }
            else a[i] = b[i];
        }
    }
    cout<<"YES\n";
}
int main() {
	// your code goes here
	int t; cin>>t; while(t--)
	solve();
	return 0;
}
