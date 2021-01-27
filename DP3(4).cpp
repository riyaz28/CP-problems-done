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






// THIS code has 2 bugs in the video that I fixed


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
#include <functional>
#include<stdio.h>
#include<assert.h>
#include<memory.h>
using namespace std;

#define all(v)        ((v).begin()), ((v).end())
#define sz(v)       ((int)((v).size()))
#define clr(v, d)     memset(v, d, sizeof(v))
#define rep(i, v)   for(int i=0;i<sz(v);++i)
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)  for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)  for(int i=(j);i>=(int)(n);--i)
#define repa(v)       lpi(i, 0, sz(v)) lpi(j, 0, sz(v[i]))
#define P(x)        cout<<#x<<" = { "<<x<<" }\n"
#define pb          push_back
#define MP          make_pair

typedef vector<int>       vi;
typedef vector<double>    vd;
typedef vector< vi >      vvi;
typedef vector< vd >      vvd;
typedef vector<string>    vs;
typedef long long         ll;
typedef long double       ld;

const ll OO = 1e8;  //Small -> WRONG, Large -> OVERFLOW

const double PI  = acos(-1.0);
const double EPS = (1e-7);

int dcmp(double x, double y) {  return fabs(x-y) <= EPS ? 0 : x < y ? -1 : 1; }


const int COINS = 11;
const int MAX_COIN = 30000+1;

int coins[COINS] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};

ll mem[2][MAX_COIN];

int main()
{
#ifndef ONLINE_JUDGE
  freopen("test.txt", "rt", stdin);
#endif

  int p = 0;
  mem[p][0] = mem[!p][0] = 1;


  // swap loops: Doesn't affect correctness
  // Now we depend only on the last accumulative coin. So we can enhance memory
  // This is called rolling table technique
  for (int j = 0; j < COINS; ++j) {
    p = !p;
    for (int coin = coins[0]; coin < MAX_COIN; coin += 5)
     {
      mem[p][coin] = 0; // avoid last iterations calculations
      if(j)
        mem[p][coin] = mem[!p][coin];
      if(coin-coins[j] >= 0)
        mem[p][coin] += mem[p][coin-coins[j]];
    }
  }


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
      <<mem[p][val]
      <<"\n";
  }


  return 0;
}
