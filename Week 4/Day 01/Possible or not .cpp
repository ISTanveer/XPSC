#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n, k; cin>>n>>k;
	    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
	    int ans = -1;
	    for(int i=0; i<n; i++)
	    {
	        if((v[i]&k)==k){
	            ans &=v[i];
	        }
	    }
	    if(ans==k) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}

