#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=2e5+1;
ll dp[501][N];

ll mod=1e9+7;

int main()
{
 int n;
 cin>>n;
 vector<int>a(n+1);
 
 ll m=0;
 m=(n*(n+1))/2;
 
 dp[0][0]=1;
 
 //no of ways to reach m/2 in our set finally you have to divide that state again by 2 in order to remove pairs
for(int i=1;i<=n;i++)
{ for(int j=1;j<=m/2;j++)
{
   dp[i][j]+=(dp[i-1][j])%mod+(j-a[i]>=0?dp[i-1][j-i]:0)%mod;
   
   dp[i][j]%=mod;
}
}
 
//  for(int i=0;i<=n;i++)
// {for(int j=0;j<=m/2;j++)
// 	{
// 		cout<<dp[i][j]<<" ";
// 	}
// 	cout<<endl;
//  } 
 if(m%2!=0)
 cout<<0<<endl;
 else
 cout<<dp[n][m/2]<<endl;
 	
}
