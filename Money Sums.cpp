#include<bits/stdc++.h>
using namespace std;

const int N=101;
const int M=1e5+1;
int dp[N][M];


int main()
{
	int n,m;
	cin>>n;
	m=0;
	vector<int>a(n+1);
	for(int i=1;i<=n;i++) {cin>>a[i];m+=a[i];}
	
	int cnt=0;
	vector<int>res;
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
    {if(dp[n][j]==1){cnt++;res.push_back(j);}}
    
    cout<<cnt<<endl;
    for(auto ele:res) cout<<ele<<" ";
}
