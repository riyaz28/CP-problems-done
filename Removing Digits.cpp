#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=1e6+1;
ll dp[N];

int main()
{
	ll num;
	cin>>num;
	memset(dp,0,sizeof(dp));
	
	dp[0]=0;
	for(int i=1;i<=9;i++)
	dp[i]=1;
	
	
	for(int i=10;i<=num;i++)
	{ 
	    dp[i]=INT_MAX;
	    ll temp=i;
	    while(temp>0)
	    {  
	        
	        ll rem=temp%10;
	        if(rem!=0)
	        {dp[i]=min(dp[i-rem]+1,dp[i]);
	        temp/=10;
	        }
	        else
	        temp/=10;
	    }
	}
	cout<<dp[num]<<endl;
}
