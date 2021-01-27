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

const int N=1e7;
bitset<N> b1;
int main()
{
	ll step,mod;
	while(cin>>step>>mod)
	{
 		int n0=0;
 		
		//ll itr=mod-1;
		int n1=0;
		int oth=0;
		FORE(i,0,mod-1)
		{
		 	n1 =(step+n1)%mod;
		 	if(n1==0) 
			 {n0++;continue;}
		 	 if(b1[n1]==0)
		 	 {
		 	  	oth++;
		 	  	b1[n1]=1;
			 }
		}
		if(n0==1&&n0+oth==mod) 
		{
		op(step);cout<<" ";op(mod);cout<<" ";op("Good Choice");nl;	
		}
		else
		{
		op(step);cout<<" ";op(mod);cout<<" ";op("Bad Choice");nl;	
		 }
		 b1.reset();
	}
	
}
