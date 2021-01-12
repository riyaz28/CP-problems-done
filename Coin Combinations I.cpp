#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod=1e9+7;
const int N=1e6+1;

ll coins[101];
ll dp[N];


int main()
{
	int n;
	ll sum;
	cin>>n>>sum;
	for(int i=1;i<=n;i++)cin>>coins[i];
	
	memset(dp,0,sizeof(dp));
     dp[0]=1;
     
     for(int i=1;i<=sum;i++)
     {
      for(int j=1;j<=n;j++)
      {
      if(i-coins[j]>=0)
	  {dp[i]+=(dp[i-coins[j]]%mod);	
      }
      }
      dp[i]%=mod;
     }

cout<<dp[sum];
}
