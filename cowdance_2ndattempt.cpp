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



bool f(int mid,vector<int>&a,int &tmax)
{
    int n=a.size();
 priority_queue<int,vector<int>,greater<int>>pq;
 int lt=0;
 for(int i=0;i<=n-1;i++)
 {
if(pq.size()==mid)
{
    lt=pq.top();
    pq.pop();
}
if(lt+a[i]>tmax)
{
    return false;
}
   pq.push(lt+a[i]);
 } 
return true;
}

int32_t main()
{
  freopen("cowdance.in", "r", stdin);
  freopen("cowdance.out", "w", stdout);
int n,tmax;
cin>>n>>tmax;
vector<int>a(n);
for(int i=0;i<n;i++)cin>>a[i];

   int lo=1,hi=n;
	for (hi ++; lo < hi;) {
		int mid = lo+(hi-lo)/2;
		if (f(mid,a,tmax)) hi = mid;
		else lo = mid+1;
	}
	cout<<lo;

return 0;
}