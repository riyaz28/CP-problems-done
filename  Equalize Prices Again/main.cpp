#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        int sum=0;
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
            {cin>>a[i];
              sum+=a[i];
              mx=max(a[i],mx);
            }
            int l=0;
            int r=mx;
            int ans;
            while(l<=r)
            {
                int mid=(l+r)/2;
            if(mid*n>=sum/n)
            {
                r=mid-1;
                ans=mid;
            }
            else
                l=mid+1;

            }

            cout<<floor(ans)<<endl;

    }
    return 0;
}
