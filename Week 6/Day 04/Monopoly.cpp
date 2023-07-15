#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a, b, c, d; cin>>a>>b>>c>>d;
	    if(a>(b+c+d)) cout<<"Yes\n";
	    else if(b>(a+c+d)) cout<<"Yes\n";
	    else if(c>(a+b+d)) cout<<"Yes\n";
	    else if(d>(a+b+c)) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}

