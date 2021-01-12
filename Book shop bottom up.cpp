#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+1;
ll price[1001];
ll pages[1001];


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
	ll x;
	cin>>n>>x;

for(int i=1;i<=n;i++)
{
cin>>price[i];
}
for(int i=1;i<=n;i++)
{
    cin>>pages[i];
}
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));

for(int i=1;i<=n;i++)
{for(int j=0;j<=x;j++)
{

if(j>=price[i])
dp[i][j]=pages[i]+dp[i-1][j-price[i]];

dp[i][j]=max(dp[i][j],dp[i-1][j]);
}
}

cout<<dp[n][x];
}
