#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=5001;
ll dp[N][N];

int main()
{
	int n;
	cin>>n;
	vector<ll>a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
	
	memset(dp,0,sizeof(dp));
	int j=1;
	int i=1;
	//base case
	while(j<=n)
	{
		dp[i][j]=a[i];
		i++;
		j++;
	}
	
	for(j=2;j<=n;j++)
	{  
	   int c=j;
	   i=1;
	  while(c<=n)
	  {
	  	dp[i][c]=max(a[i]+min(dp[i+1][c-1],dp[i+2][c]),a[c]+min(dp[i+1][c-1],dp[i][c-2]));
	  	c++;
	  	i++;
	  }
	}
	   cout<<dp[1][n];
}
