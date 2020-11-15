#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{    ll t;
    cin>>t;
    while(t--)
    { ll n,k;
      cin>>n>>k;
      ll sum=0;
        for(ll i=k;i<=n;i++)
        { if(i%k==0)
        {
            sum+=(i%10);
        }
        }
         cout<<sum<<endl;
    }
    return 0;
}
