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
    ll n,m,xc,yc;
    cin>>n>>m>>xc>>yc;
    int k;cin>>k;
    ll steps=0;
    FORE(i,1,k)
    {
     ll dx,dy;
     cin>>dx>>dy;
     if(dx>=0&&dy>=0)
     {
         ll cs1,cs2;
         dx==0?cs1=INT_MAX:cs1=(n-xc)/dx;
         dy==0?cs2=INT_MAX:cs2=(m-yc)/dy;
         ll cs=min(cs1,cs2);
         steps+=cs;
         xc+=cs*dx;
         yc+=cs*dy;
     }
     else if(dx<=0&&dy>=0)
     {
         ll cs1,cs2;
         dx==0?cs1=INT_MAX:cs1=(xc-1)/abs(dx);
         dy==0?cs2=INT_MAX:cs2=(m-yc)/dy;
         ll cs=min(cs1,cs2);
         steps+=cs;
         xc+=cs*dx;
         yc+=cs*dy;
     }
     else if(dx<=0&&dy<=0)
     {
          ll cs1,cs2;
         dx==0?cs1=INT_MAX:cs1=(xc-1)/abs(dx);
         dy==0?cs2=INT_MAX:cs2=(yc-1)/abs(dy);
         ll cs=min(cs1,cs2);
         steps+=cs;
         xc+=cs*dx;
         yc+=cs*dy;
     }
     else
     {
         ll cs1,cs2;
         dx==0?cs1=INT_MAX:cs1=(n-xc)/abs(dx);
         dy==0?cs2=INT_MAX:cs2=(yc-1)/abs(dy);
         ll cs=min(cs1,cs2);
         steps+=cs;
         xc+=cs*dx;
         yc+=cs*dy; 
     }
    }
    op(steps);nl;
    return 0;
}