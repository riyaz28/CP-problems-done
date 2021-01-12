#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		int dp[n+1]={0};
		
		for(int i=1;i<=n;i++)
		cin>>a[i];
	   
	   
	   dp[n]=a[n];
	   for(int i=n-1;i>=1;i--)
	   {
	    dp[i]=a[i];
	    
	    if(i+a[i]<=n)
	    dp[i]+=dp[i+a[i]];
	   }
	   cout<<*max_element(dp,dp+n+1)<<endl;
}
}
