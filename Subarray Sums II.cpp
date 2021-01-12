#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n,x;
	cin>>n>>x;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	map<ll,int>m;
	
	ll psum=0;
	m[0]=1;
	ll res=0;
	for(int i=0;i<n;i++)
	{
		psum+=a[i];
		res+=m[psum-x];
		
		m[psum]++;
	}
	cout<<res<<endl;
}
