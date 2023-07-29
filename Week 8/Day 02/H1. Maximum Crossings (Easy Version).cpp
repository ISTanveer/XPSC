#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
        pbds<int> p;
        long long cnt=0;
        for(int i=0; i<n; i++)
        {
            if(i==0){
                p.insert(v[i]);
                continue;
            }
            int ls = p.order_of_key(v[i]);
            cnt += p.size()-ls;
            p.insert(v[i]);
        }
        cout<<cnt<<endl;
    }
    return 0;
}
