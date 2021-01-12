#include<bits/stdc++.h>
using namespace std;

int main()
{ int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

sort(a,a+n);

int leftmx[n];

int r=0;
for(int i=0;i<n;i++)
{
	
	while(a[r]-a[i]<=k&&r<n)
	{
		r++;
	}
	leftmx[i]=r-i;
}

int maxval[n]={0};
maxval[n-1]=leftmx[n-1];
for(int i=n-2;i>=0;i--)
{
	maxval[i]=max(maxval[i-1],leftmx[i]);
}
int res=0;
for(int i=0;i<n;i++)
{
 	res=max(leftmx[i]+maxval[i+leftmx[i]],res);
}	

cout<<res<<endl;	
}
