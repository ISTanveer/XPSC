#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes
	int t; cin>>t;
	while(t--)
	{
	    int n, x; cin>>n>>x;
	    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
	    sort(v.rbegin(), v.rend());
	    int i=-1;
	    while(x--){
	        i++;
	    }
	    cout<<v[i]-1<<endl;
	}
	return 0;
}

