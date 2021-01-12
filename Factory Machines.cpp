#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool f(ll mid,vector<ll>a,ll t)
{
	ll nop=0;
	
	for(int i=0;i<a.size();i++)
	{
		
		nop+=(mid/a[i]);
		if(nop>=t)
		{
			return true;
		}
	}
	return nop>=t;
}

int main()
{
	ll n,t;
	cin>>n>>t;
	vector<ll>a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	
	ll s=0;
	ll e=1e18;
	ll res;
	ll mid;
	while(s<=e)
	{
		mid=(s+e)/2;
		
		if(f(mid,a,t)==true)
		{
			res=mid;
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	cout<<res<<endl;
}
