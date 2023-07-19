#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
	    sort(v.begin(), v.end());
	    int sum = v[n-1];
	    for(int i=n-2; i>=0; i--){
	        if(v[i]!=v[n-1]) {
	            sum+=v[i];
	            break;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

