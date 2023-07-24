#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int a, b; cin>>a>>b;
	    a = 100-a;
	    b = 200 - (2*b);
	    if(a<b) cout<<"FIRST\n";
	    else if(a>b) cout<<"SECOND\n";
	    else cout<<"BOTH\n";
	}
	return 0;
}

