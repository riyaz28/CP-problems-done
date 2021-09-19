#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define setp(n) cout<<fixed<<setprecision(n)
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x
#define ip(x) cin>>x
#define ipl(s) getline(cin,s)
#define nl cout<<endl
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

const int MxN=5000000+1;
bool dp[MxN][2];
bool vis[MxN][2];
int a,b;

int fn(int sum,int fl,int totsum)
{
 
if(sum==totsum)
{
    return 1;
}
if(sum>totsum)
{
    return 0;
}


if(vis[sum][fl]==1)
return dp[sum][fl];

vis[sum][fl]=1;
if(fl==0)
{
 if(fn(sum+a,0,totsum) or fn(sum+b,0,totsum) or fn(sum/2,0,totsum))
 {
     return dp[sum][fl]=1;
 }
}
else if(fl==1)
{
  if(fn(sum+a,1,totsum) or fn(sum+b,1,totsum))
    return dp[sum][fl]=1;
}

return dp[sum][fl]=0;

}


int32_t main()
{

 	// freopen("feast.in", "r", stdin);
	// freopen("feast.out", "w", stdout);   
int T;
cin>>T>>a>>b;

int res=1;


FORE(i,1,T)
{
 if(fn(0,0,T))
 {
     res=i;
 }
}
cout<<res;

return 0;
}