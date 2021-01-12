#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod=1e9+7;
const int N=1e5+1;
ll dp[N][101];

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // dp(i,j)=with first i elements what are ways to make j sum if a[i]==j 
    
    int n,m;
    cin>>n>>m;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    
    dp[0][0]=0;
  
    
    for(int i=1;i<=n;i++)
    {for(int j=1;j<=m;j++)
    {
    	//note i=1 (as here it is not dependent on prev states)is considered our base case not i=0 as i=0 rows and cols are all zero
    	if(i==1)
    	{
    	 if(a[i]==0)
    	 {
    	 	dp[i][j]=1;
		 }
		 else if(a[i]==j)
		 {
		 	dp[i][j]=1;
		 }
		 else
		 {
		 	dp[i][j]=0;
		 }
	    }
		else
		{
		
      if(a[i]==j||a[i]==0)
	  {
	  	dp[i][j]+=(dp[i-1][j-1]%mod+dp[i-1][j]%mod+dp[i-1][j+1]%mod);
	  	dp[i][j]%=mod;
	  }
	  else
	  {
	   dp[i][j]=0;	
	  }
     }
	}
     }
    ll res=0;
    for(int i=1;i<=m;i++)
    {
    	res+=(dp[n][i]%mod);
    	res%=mod;
	}
	
	cout<<res<<endl;
	
}
