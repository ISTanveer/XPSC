#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int v[n];
	    for(int i=0; i<n; i++) cin>>v[i];
	    for(int i=0; i<n; i++){
	        if(v[i]==0) cout<<1<<" ";
	        else cout<<0<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

