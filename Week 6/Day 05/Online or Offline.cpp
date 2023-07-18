#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    double n, m; cin>>n>>m;
	    double dis = (double) (n*10)/100;
	    n -= dis;
	    if(n<m) cout<<"ONLINE\n";
	    else if(m<n) cout<<"DINING\n";
	    else cout<<"EITHER\n";
	}
	return 0;
}

