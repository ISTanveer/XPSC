#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int a, b, c; cin>>a>>b>>c;
	    int cnt = 0;
	    if(a==0) cnt++;
	    if(b==0) cnt++;
	    if(c==0) cnt++;
	    if(cnt>1) cout<<"Water filling time\n";
	    else cout<<"Not now\n";
	}
	return 0;
}

