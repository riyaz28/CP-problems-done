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
 

/*
(a1[i]*a)%b gives remainder for a1[i]*a tokens only
hence answer is rem/a;
*/ 


int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
vector<ll>a1(n);
FOR(i,0,n)
{ cin>>a1[i];
  ll res=((a1[i]*a)%b)/a;
  cout<<res<<" ";
}
return 0;
}