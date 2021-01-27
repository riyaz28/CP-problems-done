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

ll mem[MAX_COIN];

int main()
{
#ifndef ONLINE_JUDGE
	freopen("c.in", "rt", stdin);
#endif

	// We notice that: Each time we add our position in last row, and add a previous value in current row
	// If we simply removed above row, and accumulated over it, such calculations won't conflict
	// Note, Right now, switching the 2 loops is WRONG.
	mem[0] = 1;

	for (int j = 0; j < COINS; ++j)
		for (int coin = coins[j]; coin < MAX_COIN; coin += 5)
			mem[coin] += mem[coin-coins[j]];

			
			
			
			
			
			
			
			
			
			
			

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
			<<mem[val]
			<<"\n";
	}


	return 0;
}
