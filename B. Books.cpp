#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	vector<int>a(n);
	
	for(int i=0;i<n;i++)
	cin>>a[i];

	int sum=0;
	int e=0;
	int res=INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		while(sum+a[e]<=t)
		{
			sum+=a[e];
			e++;
		}
		res=max(e-i,res);
		sum-=a[i];
	}
	cout<<res<<endl;
}
