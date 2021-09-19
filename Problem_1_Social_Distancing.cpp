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


int n,m;
vector<pii>a;

int f(int d)
{

  int in=a[0].first;
  int mul=1,cnt=0,i=0;
  while(i<m)
  { 
    if(in+d>=a[i].first and in+d<=a[i].second)
    {
       cnt++;in+=d;
       mul=(a[i].second-in)/d;
       cnt+=mul;
       in+=mul*d;
    }
    else if(in+d<a[i].first)
    {
        cnt++;
        in=a[i].first;
        mul=(a[i].second-in+1)/d;mul--;
        cnt+=mul;
        in+=mul*d;
    } 
    i++;
   
  }


 return cnt;
}

int32_t main()
{
    //  freopen("socdist.in","r",stdin);
    //  freopen("socdist.out","w",stdout);   
 cin>>n>>m;
 int in1,in2;
 FORE(i,0,m-1)
 {
 cin>>in1>>in2;
 a.pb({in1,in2});
 }    
 sort(all(a));

//    int lo=1,hi=a[n-1].second-a[0].first;
// 	for (hi ++; lo < hi; ) 
//     {
// 		int mid = lo+(hi-lo)/2;
// 		if (f(mid)) hi = mid;
// 		else lo = mid+1;
// 	}
// 	cout<< lo;
cout<<f(1);

return 0;
}