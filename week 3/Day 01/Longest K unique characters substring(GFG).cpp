//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int n = s.size();
    int fq[26] = {0};
    int i=0, j=0, ans = -1, cnt = 0;
    //sliding window problems.....
    while(j<n){
        if(fq[s[j]-'a']==0) cnt++;
        fq[s[j]-'a']++;


        if(cnt>k){
            while(1){
                    fq[s[i]-'a']--;
                    if(fq[s[i]-'a']==0) {
                        i++;
                        break;
                    }
                    i++;

            }
            cnt--;
        }
         if(cnt==k){
            ans = max(ans, j-i+1);
        }
        j++;
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
