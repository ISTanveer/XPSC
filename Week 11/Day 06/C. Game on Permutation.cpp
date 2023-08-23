#include<bits/stdc++.h>
using namespace std;
struct FenwickTree
{
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n)
    {
        this->n = n;
        bit.assign(n, 0);
    }
    FenwickTree(vector<int> a) : FenwickTree(a.size())
    {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }
    int sum(int r)
    {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    int sum(int l, int r) // a[l] + a[l+1] + a[l+2] + ... + a[r] // O(logn)
    {
		if(l>r)
			return 0;
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) // a[idx] += delta //O(logn)
    {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};

void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> win(n);
    FenwickTree f1(n+1);
    FenwickTree f2(n+1);

    for(int i=0; i<n; i++)
    {
        int w = f1.sum(0, v[i]-1);
        int l = f2.sum(0, v[i]-1) - w;
        f2.add(v[i], 1);
        if(w==0&&l==0)
        {
            win[i]= 1;
        }
        else if(l){
            win[i]=1;
        }
        else win[i]=0;
        f1.add(v[i], win[i]);
    }
    int ans =0;
    for(int i=0; i<n; i++)
    {
        if(win[i]==0) ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
