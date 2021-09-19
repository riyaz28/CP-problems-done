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


ll n,k;
vector<ll>a;


bool f(ll mid)
{
 ll cnt=1;
 ll csum=0;
 FORE(i,0,n-1)
 {
     csum+=a[i];
     if(csum>mid)
     {
         cnt++;
         csum=a[i];
     }
 }
return cnt<=k;
}

int32_t main()
{
cin>>n>>k;
ll mn=0,mx=0;
ll inp;
FORE(i,0,n-1){cin>>inp;a.pb(inp);mn=max(mn,inp);mx+=inp;}

     ll lo=mn,hi=mx;
	for (hi ++; lo < hi; ) {
		ll mid = lo+(hi-lo)/2;
		if (f(mid)) hi = mid;
		else lo = mid+1;
	}
	cout<<lo;

return 0;
}