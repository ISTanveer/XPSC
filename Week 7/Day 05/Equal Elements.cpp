#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
	    sort(v.begin(), v.end());
	    int mx = 0, cnt=1;
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]==v[i+1]&&i<n-1){
	            cnt++;
	        }
	        else{
	            if(mx<cnt) mx = cnt;
	            cnt=1;
	        }
	    }
	    cout<<n-mx<<endl;

	}
	return 0;
}
