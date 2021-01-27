#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x
#define ip(x) cin>>x
#define ipl(s) getline(cin,s)
#define nl cout<<endl
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

int n=100;
int primes[3]={2,3,5};

//8=2*2*2;
//10=2*5;
// while counting individual even it should not be an intersection in itself hence factorize the numbers and count
int inc_exe(int idx=0,int d=1,int sign=-1)
{
	if(idx==3)
	{
		if(d==1) return 0;
		
		return sign*(n/d);
	}
	
	return inc_exe(idx+1,d,sign) + inc_exe(idx+1,d*primes[idx],sign*-1);
}

int main()
{
	op(inc_exe());
}
