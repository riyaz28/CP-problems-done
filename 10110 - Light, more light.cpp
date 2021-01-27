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

int main()
{
	
	while(1)
	{
		ll n;ip(n);
		if(n==0) break;
		//just check if prime factors odd or even
		if(sqrt(n)*sqrt(n)==n) op("yes");
		else op("no");
		
		nl; 
	}
	return 0;
}
