#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1e9
/*int maxsum(ll cost[],ll wt[],ll n,ll w)      //recursive solution
{
    if(n==0||w==0)   //base case if we reach max capacity or weight =0
    {
        return 0;
    }
    //2 options we either include or dont include n'th item in knapsack
    ll sub1,sub2;
    sub1=sub2=INT_MIN;
    if(wt[n-1]<=w)
    sub1=cost[n-1]+maxsum(cost,wt,n-1,w-wt[n-1]);

    sub2=maxsum(cost,wt,n-1,w);

     ll ans=max(sub1,sub2);

    return ans;
*/
long int solve(vector<long int>wt,vector<long int>cost,long int n,long int w)
{
    long int dp[n+1][w+1]={0};
    for(long int i=0;i<=n;i++)
    {for(long int j=0;j<=w;j++)
    {
        if(i==0||j==0) //base case
            dp[i][j]=0;
        else
        { long int sub1,sub2;
          sub1=sub2=0;

            sub1=dp[i-1][j];
            if(wt[i]<=j)
            sub2=cost[i]+dp[i-1][j-wt[i]];

            dp[i][j]=max(sub1,sub2);
        }


    }
    }

    return *max_element(dp[n],dp[n]+w+1);  //*means return value at max_element(a,a+n) index   //where a array
}
int main()
{
    long int n,w;
    cin>>n>>w;
    vector<long int>wt(n+1);
    vector<long int>cost(n+1);
    for(long int i=1;i<=n;i++)
    {
        cin>>wt[i]>>cost[i];

    }
    cout<<solve(wt,cost,n,w);

    return 0;
}
