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
 vector<int>a;
 const int MEX=1e5+1;
 int dp[101][MEX];
 int n;

 bool fn(int i,int sum)
 {
  if(sum==0)
  return 1;
  if(sum<0)
  return 0;   
  if(i==n)
  {
      if(sum>0)
      return 0;

      if(sum==0)
      return 1;
  }

  if(dp[i][sum]!=-1)return dp[i][sum];
  bool res=0;
  if(fn(i+1,sum)==1)
  {
      res=1;
  }
  if(sum-a[i]>=0)
  {
      if(fn(i+1,sum-a[i])==1)
      {
          res=1;
      }
  }
 
 return dp[i][sum]=res;

 }


int32_t main()
{
cin>>n;

int sum=0;
FORE(i,0,n-1)
{
  int inp;cin>>inp;
  a.pb(inp);sum+=inp;
}
memset(dp,-1,sizeof(dp));


vector<int>res;
for(int s=1;s<=sum;s++)
{
 if(fn(0,s))
 {
  res.pb(s);
 }
}
cout<<(int)res.size()<<endl;
if(res.size()!=0)
{
    for(auto ele:res)
    {
        cout<<ele<<" ";
    }
}

return 0;
}