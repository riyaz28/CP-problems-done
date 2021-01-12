#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	int n,q;
	cin>>n>>q;
	vector<int>a(n+1);
	vector<int>pref(n+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	
	pref[1]=a[1];
	for(int i=2;i<=n;i++) pref[i]=pref[i-1]^a[i];
	
	for(int i=1;i<=q;i++)
	{
		int l,r;
		cin>>l>>r;
		
		int res=pref[r]^pref[l-1];
		cout<<res<<endl;
	}
	
	
}
