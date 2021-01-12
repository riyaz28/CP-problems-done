#include<bits/stdc++.h>
using namespace std;

const int mx=2502;
const int N=501;
int dp[N][N];

int main()
{
	int n,m;
	cin>>n>>m;
	
	
	for(int i=0;i<=m;i++)dp[0][i]=mx;
    for(int i=0;i<=n;i++)dp[i][0]=mx;
	
	
	//base case
	dp[1][1]=0;
	for(int i=2;i<=m;i++)
	{ 
	dp[1][i]=mx;
	for(int c=1;c<=i-1;c++)
		{
			
			dp[1][i]=min(dp[1][i],1+dp[1][c]+dp[1][i-c]);
		}
	}
	for(int i=2;i<=n;i++)
	{ 
	dp[i][1]=mx;
	//cuts
	for(int c=1;c<=i-1;c++)
		{
			
			dp[i][1]=min(dp[i][1],1+dp[c][1]+dp[i-c][1]);
		}
	}
		
	for(int i=2;i<=n;i++)
	{for(int j=2;j<=m;j++)
	{   
	    if(i==j)
        dp[i][j]=0;	    
	    else
	    {	    
	     dp[i][j]=mx;
	     //cuts
		for(int c=1;c<=i-1;c++)
		{
			dp[i][j]=min(dp[i][j],1+dp[i-c][j]+dp[c][j]);
		}
		for(int c=1;c<=j-1;c++)
		{
			dp[i][j]=min(dp[i][j],1+dp[i][j-c]+dp[i][c]);
		}

	    }
	}
	}

	
 cout<<dp[n][m];
    


}
