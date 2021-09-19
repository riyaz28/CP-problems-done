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

int m,c;

int f(int time,vector<int>&a)
{
 int i=0,j=0;
 int n=a.size();
 int ct=0;
 int buses=1;
for(int j=0;j<n;)
{
	if(j-i+1>c or a[j]-a[i]>time)
	{
      buses++;
	  i=j;
	}
	else
	{
	j++;
	}
}

return buses<=m;
 }





int32_t main()
{
	freopen("convention.in", "r", stdin);
  freopen("convention.out", "w", stdout);
 int n; vector<int>a;
 cin>>n>>m>>c;
 FORE(i,0,n-1){int inp;cin>>inp;a.pb(inp);}
 sort(all(a));
   int lo=0,hi=a[n-1]-a[0];

	for (hi ++; lo < hi; ) {
		int mid = lo+(hi-lo)/2;
		if (f(mid,a)) hi = mid;
		else lo = mid+1;
	}
	cout<<lo;


    return 0;
}



