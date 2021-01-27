 #include<set>
#include<map>
#include<list>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<sstream>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<numeric>
#include<utility>
#include<functional>
#include<stdio.h>
#include<assert.h>
#include<memory.h>
#include<bitset>
using namespace std;

#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)

typedef long long         ll;
const ll OO = 1e8;

const double EPS = (1e-7);
int dcmp(double x, double y) {	return fabs(x-y) <= EPS ? 0 : x < y ? -1 : 1;	}

#define pb					push_back
#define MP					make_pair
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"
typedef long double   	  ld;
typedef vector<int>       vi;
typedef vector<double>    vd;
typedef vector< vi >      vvi;
typedef vector< vd >      vvd;
typedef vector<string>    vs;




const int COINS = 11;
const int MAX_COIN = 30000+1;

int coins[COINS] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};

ll mem[COINS][MAX_COIN];

ll nWays(int idx, int rem)
{
	if(rem == 0)
		return 1;

	if(rem < coins[idx] || idx == COINS)
		return 0;

	ll &ret = mem[idx][rem];

	if(ret != -1)
		return ret;

	ret = nWays(idx+1, rem);	//Leave it

	while(rem - coins[idx] >= 0) {
		ret += nWays(idx+1, rem - coins[idx]);
		rem -= coins[idx];
	}

	return ret;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("c.in", "rt", stdin);
#endif

	clr(mem, -1);

	double n;
	while(cin>>n)
	{
		int val = (int)(n*100 + EPS);
		if(val == 0)
			break;

		cout<<setiosflags(ios::fixed)
			<<setiosflags(ios::showpoint)
			<<setprecision(2)
			<<setw(6)
			<<n
			<<setw(17)
			<<nWays(0, val)
			<<"\n";
	}


	return 0;
}
