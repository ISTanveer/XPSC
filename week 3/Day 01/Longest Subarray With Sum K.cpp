//https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();

    int i=0, j=0, ans = 0;
    long long sum = 0;
    while(j<n){

        sum +=a[j];

        if(sum>k){
            while(sum>k){
                sum -=a[i];
                i++;
            }
        }
        if(sum==k){
            ans = max(ans, j-i+1);
        }
        j++;
    }
    return ans;
}
