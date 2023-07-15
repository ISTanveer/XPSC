#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n, k; cin>>n>>k;
	    int tem ;
	    if(n&1) tem = (n/2) + 1;
	    else tem = n/2;
	    if(tem>k) cout<<"No\n";
	    else cout<<"Yes\n";
	}
	return 0;
}

