#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x
#define ip(x) cin>>x
#define ipl(s) getline(cin,s)
#define nl cout<<endl
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)



ll f(ll v,ll k,ll n)
{
	ll sum=0;
	int i=0;
	while(v/pow(k,i)>0)
	{
		sum+=(v/pow(k,i));
		i++;
	}
	return sum;
}

int main()
{
	ll n,k;
	cin>>n>>k;
	
	ll s=1;
	ll e=1e9;
	ll res=0;
	ll mid=0;
	while(s<=e)
	{
		mid=(s+e)/2;
		ll r1=f(mid,k,n);
		if(r1>=n)
		{ //if you found >= still reduce search space
			res=mid;
			e=mid-1;
		}
		else
		{
		 	s=mid+1;
		}
	}
	op(res);nl;
	
}





