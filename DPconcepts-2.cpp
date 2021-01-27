/*
 *
 *
 ******************************************** Licence *******************************************
 * 																								*
 * This File is part of Algorithms Arabic Video Series											*
 *	Made By Eng Mostafa Saad, Teaching Assistant in FCI - Cairo University						*
 * 																								*
 *	Available at My YouTube Channel: http://www.youtube.com/user/nobody123497?feature=mhee		*
 * 																								*
 * Feel free to make use of it at anytime, for any reason, in anyway, without any obligations.	*
 * 																								*
 * 																								*
 * In case of finding a mistake, kindly notify me at: mostafa.saad.fci@gmail.com				*
 * 																								*
 * Mostafa Saad Ibrahim © 2013																	*
 * 																								*
 ************************************************************************************************
 *
 *
 */
 
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
 
// TC: RGBStreet
// http://community.topcoder.com/stat?c=problem_statement&pm=6680


const int MAX = 21;
int r[MAX];
int g[MAX];
int b[MAX];
int n;

const int OO = (int)1e6;

int mem[MAX][4];
//for first house color is 3 meaning it can be any color hence it should be minimum of(0,0) or (0,1) or (0,2)
int minCost(int i, int lasColor)
{
	if(i == n)
		return 0;

	int &ret = mem[i][lasColor];

	if(ret != -1)
		return ret;

	ret = OO;

	if(lasColor != 0)
		ret = min(ret, r[i] + minCost(i+1, 0));

	if(lasColor != 1)
		ret = min(ret, g[i] + minCost(i+1, 1));

	if(lasColor != 2)
		ret = min(ret, b[i] + minCost(i+1, 2));

	return ret;
}


class RGBStreet {
public:

	int estimateCost(vector <string> houses)
	{
		rep(i, houses)
		{
			istringstream iss(houses[i]);
			iss>>r[i]>>g[i]>>b[i];
		}
		n = sz(houses);

		clr(mem, -1);

		return minCost(0, 3);
	}
	
};

//////////////////////////////////////////////////////////////////////////////


// TC: MaximalProduct
// http://community.topcoder.com/stat?c=problem_statement&pm=8760


int maxK;

ll mem[21][101];

ll maxProd(int k, int rem)
{
	if(k == maxK){
		// base case
		if(rem == 0)
			return 1;
		return 0;
	}
	
	if(rem == 0)	// invalid case
		return 0;

	ll &ret = mem[k][rem];

	if(ret != -1)
		return ret;

	ret = 0;

	for (int i = 1; i <= rem; ++i) {
		ll sol = maxProd(k+1, rem - i) * i;
		ret = max(ret, sol);
	}

	return ret;
}

class MaximalProduct {
public:

	long long maximalProduct(int s, int k)
	{
		maxK = k;
		
		clr(mem, -1);

		return maxProd(0, s);
	}
};
