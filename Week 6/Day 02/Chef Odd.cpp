#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    long long n, k; cin>>n>>k;
	    if((n/2)<k){
	        cout<<"No\n";
	        continue;
	    }
	    long long tem ;
	    if((n&1)) tem = (n/2) + 1;
	    else tem = n/2;
	    if((tem-k)&1) cout<<"No\n";
	    else cout<<"Yes\n";
	}
	return 0;
}

