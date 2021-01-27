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


// note: You can't use dp cause it ain't DAG ,hence use actual graph algorithm implementation!
int m;
const int mex=1e5;
int solve(int n)
{ 
    if(n==m)
    return 0;
    if(n<=0 or n>10000) return mex;
    
    if(n>m)
    return 1+solve(n-1);
    
    if(n<m)
    return 1+min(solve(n-1),solve(2*n));
}
int main()
{
   int n;
   cin>>n>>m;

   cout<<solve(n); 
}