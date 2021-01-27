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

double dist(double x1,double y1,double x2,double y2)
{	
	return sqrt(((x2-x1)*(x2-x1)) +((y2-y1)*(y2-y1)));
}

int main()
{
	int n,k;
	cin>>n>>k;
	double sum=0;
	vector<pair<double,double>>co;
	FORE(i,1,n)
	   {
		double x,y;cin>>x>>y;
		co.pb({x,y});	
		}
	FORE(i,0,n-2)
	{
		sum+=dist(co[i].first,co[i].second,co[i+1].first,co[i+1].second);
	}
// 	if(n>2)
// 	sum+=dist(co[n-1].first,co[n-1].second,co[0].first,co[0].second);	
	
	double t1=sum/50.0;
	t1*=k;
    setp(7);op(t1);nl;
     }
