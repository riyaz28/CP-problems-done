#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		
		ll cnt=0;
		for(int i=0;i<n;i++) {if(s[i]=='1')cnt++;}
		ll res=(cnt*(cnt+1))/2;
		cout<<res<<endl;
	}
	
	return 0;
}
