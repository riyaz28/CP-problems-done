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

int main()
{
 ll n;
 cin>>n;

ll res=1;
 FORE(i,1,n)
 {
   res=((res)%mod*(27))%mod;
   res%=mod;
 }   
 ll n1=1;
 FORE(i,1,n)
 {
     n1=((n1)%mod*7)%mod;
     n1%=mod;
 }
 //op(res);cout<<" ";op(n1);nl;
 ll final=((res-n1)%mod+mod)%mod;
 op(final);nl;
}