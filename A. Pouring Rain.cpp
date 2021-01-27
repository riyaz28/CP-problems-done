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
 
const double pi=acos(-1.0);
const double mx=1e4;
int main()
{
	double d,h,v,e;
	cin>>d>>h>>v>>e;
	
	double nr=(4*v)/(pi*d*d);
	if(nr>e)
	{
	    op("YES");nl;
	 double n1=h/(nr-e);
	 if(n1<=mx)
	 setp(6);op(n1);	
	}
	else
	{
		op("NO");
	}
	nl;
	return 0;
}
 
