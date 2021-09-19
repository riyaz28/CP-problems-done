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

bool cmp(pii&a,pii&b)
{


 return a.second<b.second;
}
int32_t main()
{
    freopen("helpcross.in", "r", stdin);
	freopen("helpcross.out", "w", stdout);
    int n,m;
    cin>>n>>m;
   multiset<int>a;
   FORE(i,1,n)
   {
       int inp;cin>>inp;
       a.insert(inp);
   }
   vector<pii>b;
   FORE(i,1,m)
   {
       int st,et;
       cin>>st>>et;
       b.pb({st,et});
   }
sort(all(b),cmp);
int cnt=0;
FORE(i,0,m-1)
{
    auto it=a.lower_bound(b[i].first);
    if(it==a.end())
    {
        continue;
    }
   if(*it>b[i].second)
   {
      continue;
   }
  
   a.erase(it);
   cnt++;
}
op(cnt);

return 0;
}