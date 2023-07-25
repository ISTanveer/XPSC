#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    if(n%2==1){
	        cout<<-1<<endl;
	        continue;
	    }
	    vector<int> v(n+1);
	    int odd=1, even=2;
	    for(int i=1, j=2; j<=n; i+=2, j+=2)
	    {
	        v[i] = even;
	        even+=2;
	        v[j] = odd;
	        odd+=2;
	    }
	    for(int i=1; i<=n; i++) cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

