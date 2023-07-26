#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
	    int alic = v[0];
	    int bob = 0;
	    for(int i=1; i<n; i++) bob+=v[i];
	    if(alic&1&&bob&1) cout<<"YES\n";
	    else if(!(alic&1)&&!(bob&1)) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}

