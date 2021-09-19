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

int n,k;

int f(int r,vector<int>&a)
{
 int cows=1;
 int i=0;
 for(int j=0;j<n;)
 {
if(a[j]-a[i]>2*r) 
 {
     i=j;
     cows++;
     j++;
 }
 else
  {
      j++;
  }     
}
     return cows<=k;
}

int32_t main()
{
  freopen("angry.in", "r", stdin);
  freopen("angry.out", "w", stdout);  
  cin>>n>>k;
  vector<int>a(n);
  FORE(i,0,n-1)cin>>a[i];
  sort(all(a));
  int lo=0;int hi=a[n-1]-a[0];
 for(hi++;lo<hi;)
 {
     int mid=lo+(hi-lo)/2;
     if(f(mid,a)) hi=mid;
     else lo=mid+1;

 }
cout<<lo;

return 0;
}