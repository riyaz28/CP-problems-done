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
#define nl                   cout<<endl
#define pb					push_back
#define MP					make_pair
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"
typedef long double   	  ld;
typedef vector<int>       vi;
typedef vector<double>    vd;
typedef vector< vi >      vvi;
typedef vector< vd >      vvd;
typedef vector<string>    vs;

int maxK;
ll dp[21][101];

ll maxProd(int i,int rem)
{
   if(i==maxK)
   {
       if(rem==0)
       return 1;

       else return 0;
   }
   
   if(rem==0)
   return dp[i][rem]=0;
    
   if(dp[i][rem]!=-1)
   return dp[i][rem];

   dp[i][rem]=INT_MIN;
  for(int num=1;num<=rem;num++)
  {
      dp[i][rem]=max(num*maxProd(i+1,rem-num),dp[i][rem]);
  }
  return dp[i][rem];

}

class MaximalProduct {
public:

	long long maximalProduct(int s, int k)
	{
		maxK = k;
		clr(dp, -1);
		return maxProd(0, s);
	}
};
int main()
{
    MaximalProduct p1,p2,p3;
    cout<<p1.maximalProduct(10,3);nl;
    cout<<p2.maximalProduct(10,1);nl;
    cout<<p3.maximalProduct(13,8);nl;
}