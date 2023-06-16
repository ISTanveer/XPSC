//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k)
    {
        // Complete the function
        map<int, int> mp; //instead of sliding window...because of negative value.
        //we can maintain sliding window problems by using map hashing..
        int i=0, j=0, ans = 0, sum=0;
        while(j<N){
            sum +=A[j];

            if(sum-k==0){
                ans = max(ans, j+1);
            }
            if(sum-k!=0){
                if(mp.find(sum-k)!=mp.end()){
                    ans = max(ans, j-mp[sum-k]);
                }

            }
            if(mp.find(sum)==mp.end()){
                mp[sum] = j;
            }
            j++;
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
	//code

	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];

	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;

	}

	return 0;
}
// } Driver Code Ends
