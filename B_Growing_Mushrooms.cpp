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
 
const double eps=1e-3;
struct par
{
    int ind;
    double pt;
};
bool cmp(par a,par b)
{
    if(a.pt-b.pt<=eps)
    return a.ind<b.ind;
 
    return a.pt-b.pt>=eps;
 
}
int main()
{
    int n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    
    vector<par>res;
   FORE(i,1,n)
   {
       double a,b;cin>>a>>b;
       double r1=max(a*t1-(double)((a*t1*k)/100)+b*t2,b*t1-(double)((b*t1*k)/100)+a*t2);
       res.pb({i,r1});
   }
   sort(all(res),cmp);
  
  for(auto ele:res)
  {
      cout<<ele.ind<<" ";
      setp(2)<<ele.pt;nl;
  }
  return 0;
}