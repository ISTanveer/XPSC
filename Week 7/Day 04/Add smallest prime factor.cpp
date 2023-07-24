#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int x, y; cin>>x>>y;
	    int cnt = 0;
	    if(x==2||x==3||x==5||x==7) {
	        cnt++;
	        x*=2;
	    }
	    if(x%2!=0){
	        x+=3;
	        cnt++;
	    }
	    while(x<y) {
	        x+=2;
	        cnt++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}

