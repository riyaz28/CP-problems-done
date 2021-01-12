#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+1;
ll dp[1001][N];
ll price[1001];
ll pages[1001];

ll solve(int idx,ll sum)
{
	if(idx<1||sum<=0)
	{
		return 0;
	}
	if(dp[idx][sum]!=-1)
	return dp[idx][sum];
	
	ll pos1=0;
	if(sum-price[idx]>=0)
	pos1=pages[idx]+solve(idx-1,sum-price[idx]);
	
	ll pos2=solve(idx-1,sum);
	
	return dp[idx][sum]=max(pos1,pos2);
	 
}

int main()
{
	int n;
	ll x;
  cin>>n>>x;
        memset(dp,-1,sizeof(dp));	
	for(int i=1;i<=n;i++){
	cin>>price[i];
     }
     for(int i=1;i<=n;i++) cin>>pages[i];
     
  cout<<solve(n,x);	

}
