#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod=1e9+7;
const int N=1e6+1;
ll dp[N];

int main()
{
 int n;
 cin>>n;
 
 dp[0]=1;
 dp[1]=1;
 dp[2]=2;
 
 for(int i=3;i<=n;i++)
 {
 	for(int j=1;j<=6;j++)
 	{
 		if(i-j>=0)
 		dp[i]+=(dp[i-j]%mod);
	 }
	 dp[i]=dp[i]%mod;
 }
 cout<<dp[n];
}
