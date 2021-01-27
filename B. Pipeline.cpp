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

ll bs(ll n)
{
	ll s=2;
	ll e=1e9;
	ll mid;
	ll res;
	while(s<=e)
	{
		ll mid=(s+e)/2;
		
		if(mid==n)
		{
			res=mid;
		}
		else if(mid>n)
		{
		 e=mid-1;	
		}
		else s=mid+1;
	}
	return res;
}


int main()
{
	ll n,k;
	cin>>n>>k;
	ll cnt=0;
	while(n>=0)
	{
		ll dif=bs(n);
		n-=dif;
		cnt++;
	}
	op(cnt);

}
