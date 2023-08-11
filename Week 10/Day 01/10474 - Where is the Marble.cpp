#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t = 1;
    while(1){
    int n, q;
    cin>>n>>q;
    if(n==0&&q==0) return 0;
    vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        cout<<"CASE# "<<t<<":\n";
        for(int i=1; i<=q; i++)
        {
            int x;
            cin>>x;
            int l = 0, h = n-1, ans = -1;
            while(l<=h)
            {
                int mid = l+ (h-l)/2;
                if(v[mid]==x)
                {
                    ans = mid;
                    h = mid-1;
                }
                else if(v[mid]>x){
                    h = mid-1;
                }
                else l = mid+1;
            }
            if(ans==-1) cout<<x<<" not found"<<endl;
            else cout<<x<<" found at "<<ans+1<<endl;
        }
        t++;
    }
}
