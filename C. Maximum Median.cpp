#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool f(ll med,vector<ll>a,int n,ll k)
{
	ll res=0;
	for(int i=(n-1)/2;i<n;i++)
	{
	  	res+=max((ll)0,med-a[i]);
	}
	if(res<=k)
	return true;
	
	return false;
}

int main()
{
 ll n,k;
 cin>>n>>k;
 
 vector<ll>a(n);
 for(int i=0;i<n;i++)cin>>a[i];	
sort(a.begin(),a.end());

	ll s=0;
	ll e=1e9;
	ll mid;
	ll ans;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(f(mid,a,n,k)==true)
		{ 
		  s=mid+1;	
		}
		else
		{
			e=mid-1;
		}
	}
	cout<<s;
}
