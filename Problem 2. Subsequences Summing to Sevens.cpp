#include<bits/stdc++.h>
using namespace std;

int main()

{

freopen("div7.in","r",stdin);
freopen("div7.out","w",stdout);

	int n;
	cin>>n;
	vector<int>a(n+1);
	vector<int>pref(n+1,0);
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++) pref[i]=pref[i-1]+a[i];
	
	int res=0;
	for(int l=1;l<=n;l++)
	{for(int r=1;r<=n;r++)
	{
	 if((pref[r]-pref[l-1])%7==0) res=max(r,res-(l-1));	
	}
	}
	cout<<res<<endl;
}
