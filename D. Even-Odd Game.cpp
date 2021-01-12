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
	vector<int>a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	sort(a.rbegin(),a.rend());
	ll as,bs;
	as=bs=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			if(a[i]%2==0)
			as+=a[i];
		}
		else
		{
			if(a[i]%2==1)
			bs+=a[i];
		}
	}
	if(as>bs)
	cout<<"Alice";
	else if(bs>as)
	cout<<"Bob";
	else
	cout<<"Tie";

cout<<endl;	
}
}
 
