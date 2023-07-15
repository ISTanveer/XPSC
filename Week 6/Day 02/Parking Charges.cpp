#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, y, h; cin>>x>>y>>h;
	int dif = h-1;
	int ans = x + (dif*y);
	cout<<ans<<endl;
	return 0;
}

