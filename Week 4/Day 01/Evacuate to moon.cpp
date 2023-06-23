#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    long long n, m, h; cin>>n>>m>>h;
	    vector<long long> c(n), p(m);
	    for(int i=0; i<n; i++) cin>>c[i];
	    for(int i=0; i<m; i++) {
	        cin>>p[i];
	    }
	    sort(c.rbegin(), c.rend());
	    sort(p.rbegin(), p.rend());

	    long long ans = 0;
	    for(int i=0, j=0; i<n&&j<m; i++, j++){
	        if((h*p[i])<c[i]) ans += (h*p[i]);
	        else ans += c[i];
	    }
	    cout<<ans<<endl;

	}
	return 0;
}

