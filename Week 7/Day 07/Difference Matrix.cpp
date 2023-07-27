#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int a[n][n];
	    int val=1;
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<n; j+=2)
	        {
	            a[i][j]=val;
	            val++;
	        }
	    }
	    for(int i=0; i<n; i++)
	    {
	        for(int j=1; j<n; j+=2)
	        {
	            a[i][j]=val;
	            val++;
	        }
	    }
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}

