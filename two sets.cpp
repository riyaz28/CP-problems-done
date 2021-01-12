#include<bits/stdc++.h>
using namespace std;

const int N=101;
const int M=1e6+1;
ll mod=1e9+7;
ll dp[N][M];


int main()
{
	int n,m;
	cin>>n;
	m=0;
	vector<ll>a(n+1);
	for(ll i=1;i<=n;i++) {a[i]=i;m+=a[i];}
	
	ll cnt=0;
	
	for(int i=1;i<=n;i++)
	{for(int j=1;j<=m;j++)
	{
	    
	 if(a[i]==j)
	 dp[i][j]=1;
	 else
	 {
	  if(dp[i-1][j]==1||dp[i-1][j-a[i]]==1)  //excluded subset possibilities+included subset possibilities
	  dp[i][j]=1;
	 }
	}
	}
	
    for(int j=1;j<=m;j++)
    {
	if(dp[n][j/2]==dp[n][j])
	{
		cnt=(cnt+1);
	}
   }
    
    cout<<cnt<<endl;
}
