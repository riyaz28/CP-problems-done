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

//corner case check for y1-y0==0
int main()
{
    int n;
    double x0,y0;
    cin>>n>>x0>>y0;
    set<double>sl;
     
    FORE(i,1,n)
    { 
      double xi,yi;
      cin>>xi>>yi;
      
      double ra=(yi-y0)/(xi-x0);
      if(xi==x0)
      {sl.insert(INT_MAX);
       continue;
      }
     sl.insert(ra);
    }
    op(sl.size());nl;
}