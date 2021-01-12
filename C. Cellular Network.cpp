#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
int n,m;
cin>>n>>m;
vector<ll>a(n);
vector<ll>b(m);
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<m;i++)
cin>>b[i];



ll res=0;
for(int i=0;i<n;i++)
{   ll temp;
	auto it=lower_bound(b.begin(),b.end(),a[i]);
	temp=abs((*it)-a[i]);
	
	it--;
	temp=min(temp,(*it)-a[i]);
	
	res=max(res,temp);
}

	cout<<temp;
}
