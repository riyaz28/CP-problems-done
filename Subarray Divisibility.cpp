#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	vector<ll>a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	map<ll,ll>m;
	
	m[0]=1;
	ll psum=0;
	ll res=0;
	
	for(int i=0;i<n;i++)
	{
		psum+=a[i];
		if(m.count(((psum%n)+n)%n)>0)
		{
			m[((psum%n)+n)%n]++;
		}
		else
		{
		m[((psum%n)+n)%n]=1;	
		}	
	}
	for(auto it:m)
	{
		if(it.second>1)
		{
			res+=(it.second*(it.second-1))/2;
		}
	}
	cout<<res<<endl;
}


