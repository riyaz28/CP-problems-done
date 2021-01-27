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

int solve(vector<vector<char>>s,int n,int m)
{
set<ll>dist;

FORE()

}


int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<char>>s(n+1,vector<char>(m+1));
	FORE(i,1,n)
	{FORE(j,1,m)
	{
		ip(s[i][j]);
	}
	}
	
	cout<<solve(s,n,m);
	return 0;
}
