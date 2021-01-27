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

int n,l,r,x;
// also solvable using bitmasks(try that method too)
int solve(vector<int>a,int i,int noe,int mn,int mx,int sum)
{
  if(i==a.size())
  {
    if(noe<2)
    return 0;

    if(noe>=2 and mx-mn>=x and sum>=l and sum<=r)
    {
     return 1;
    }
    else
    return 0;
  }

  return solve(a,i+1,noe+1,min(a[i],mn),max(a[i],mx),sum+a[i]) + solve(a,i+1,noe,mn,mx,sum);
}

int main()
{
  cin>>n>>l>>r>>x;
  vector<int>a(n);
  
  FOR(i,0,n) {cin>>a[i];}

  sort(all(a));
  cout<<solve(a,0,0,INT_MAX,INT_MIN,0);  
  return 0;
}  