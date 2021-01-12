#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod=1e9+7;
const int N=1e6+1;

ll coins[101];


int main()
{
	int n;
	ll x;
	cin>>n>>x;
	for(int i=1;i<=n;i++) cin>>coins[i];
	 vector<vector<ll>> dp(n+1,vector<ll>(x+1,0));
	 
	
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int j=0;j<=x;j++)
	dp[0][j]=0;
	
	for(int i=1;i<=n;i++)
	{for(int j=1;j<=x;j++)
	{
	  	dp[i][j]=(dp[i-1][j]%mod);
	  	if(j-coins[i]>=0)
		dp[i][j]+=(dp[i][j-coins[i]]%mod);
		  
	  	dp[i][j]%=mod;
	}	
	}
    cout<<dp[n][x];
}


