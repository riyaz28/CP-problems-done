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


ll LCM(ll a,ll b){return (a*b)/(__gcd(a,b));}

ll inc_exe(vector<ll>pff,ll num1,int idx=0,ll d=1,ll sign=-1)
{
	if(idx==pff.size())
	{
		if(d==1) return 0;
		
		return sign*(num1/d);
	}
	
	return inc_exe(pff,num1,idx+1,d,sign) + inc_exe(pff,num1,idx+1,LCM(d,pff[idx]),sign*-1);
}

int main()
{
	int t;ip(t);
	while(t--)
	{
	 ll n,m,a,d;
	 cin>>n>>m>>a>>d;
	 ll n1=a;
	 ll n2=a+d;
	 ll n3=a+(2*d);
	 ll n4=a+(3*d);
	 ll n5=a+(4*d);
	 
	
	 vector<ll>pff{n1,n2,n3,n4,n5};
	 ll r1=(ll)inc_exe(pff,m);
	 ll r2=(ll)inc_exe(pff,n-1);
	 //cout<<r1<<r2;nl;
	 ll res1=r1-r2;
	 ll resf=(m-n+1)-res1;
	 op(resf);
     nl;
	}
	return 0;
}
