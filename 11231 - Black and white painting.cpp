#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define op(x) cout<<x
#define ip(x) cin>>x
#define ipl(s) getline(cin,s)
#define nl cout<<endl
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

int main()
{
	ll n,m,c;
	while(cin>>n>>m>>c)
	{
		int rem=c==1?1:0;
		if(n==0&&m==0&&c==0) break;
		else
		{
			ll r1=n-7;
			ll r2=m-7;
			ll res=(r1*r2+rem)/2;
			op(res);
		}
		nl;
		
	}
}
