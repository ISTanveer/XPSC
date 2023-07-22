#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n, m; cin>>n>>m;
	    int tem = m*6*6;
	    if(n<=tem) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}

