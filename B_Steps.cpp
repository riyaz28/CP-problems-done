#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define setp(n) cout<<fixed<<setprecision(n)
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x
#define ip(x) cin>>x
#define ipl(s) getline(cin,s)
#define nl cout<<endl
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

ll n,m;
const ll mx=1e9;

bool isValid(ll x,ll y)
{
    return x<=n and y<=m and x>0 and y>0;
}

int main()
{
    ll xc,yc;
    cin>>n>>m>>xc>>yc;
    int k;cin>>k;
    ll steps=0;
    FORE(i,1,k)
    { ll dx,dy;
    cin>>dx>>dy;
      ll s=0;
      ll e=mx;
      ll mid;
      ll res=0;
      while(s<=e)
      {
       mid=(s+e)/2;

       if(isValid(xc+(mid*dx),yc+(mid*dy))==true)
       {   res=mid;
           s=mid+1;
       }
       else
       {
           e=mid-1;
       }
      }
      xc+=(res*dx);
      yc+=(res*dy);
      steps+=res;
    }
    op(steps);nl;
    return 0;
}