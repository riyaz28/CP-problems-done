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


ll cz(vector<int>a,int ind)
{
 ll cnt0=0;
 ll i;
 int n=a.size();
 for(i=ind+1;i<n;i++)
 {
     if(a[i]==1)
     break;
     else
     cnt0++;
 }
 return cnt0+1;
}
int main()
{
   int n;cin>>n;
   vector<int>a(n);
   ll cnt=0;
   FOR(i,0,n) 
   {cin>>a[i];
   if(a[i])cnt++;
   }
   ll res=1;
   ll tc=0;
   if(cnt==1)
   {op(1);return 0;}
   if(cnt==0)
   {op(0);return 0;}
   else
   {
     FOR(i,0,n)
     {
         if(tc==cnt-1) {break;}
         if(a[i])
         { tc++;
           ll c1=cz(a,i);
           res*=c1;
         }
     }
   }
    
   op(res);nl;
}