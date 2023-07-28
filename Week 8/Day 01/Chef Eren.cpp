#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n, a, b; cin>>n>>a>>b;
	    int dif = n/2;
	    int ans = (b*(n-dif) )+ (a*dif);
	    cout<<ans<<endl;
	}
	return 0;
}

