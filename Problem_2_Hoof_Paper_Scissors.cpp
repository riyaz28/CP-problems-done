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

map<char,int>m;
int n,k;
int dp[100001][4][21];
const int mn=-1e5;
int mat[4][4];
int a[100001];

int solve(int i,int prev,int k)
{
 if(i==n)
 {
     return 0;
 }

if(dp[i][prev][k]!=-1)
return dp[i][prev][k];

if(i==0)
{
int sub1=0;
sub1=max(mat[0][a[i]]+solve(1,0,k),max(mat[1][a[i]]+solve(1,1,k),mat[2][a[i]]+solve(1,2,k)));
return dp[i][prev][k]=sub1;
}


int sub1=0;
sub1=mat[prev][a[i]]+solve(i+1,prev,k);
int sub2=-1;
if(k-1>=0)
{
    if(prev==0)
    {
        sub2=max(mat[1][a[i]]+solve(i+1,1,k-1),mat[2][a[i]]+solve(i+1,2,k-1));
    }
    else if(prev==1)
    {
    sub2=max(mat[2][a[i]]+solve(i+1,2,k-1),mat[0][a[i]]+solve(i+1,0,k-1));
    }
    else if(prev==2)
    {
    sub2=max(mat[0][a[i]]+solve(i+1,0,k-1),mat[1][a[i]]+solve(i+1,1,k-1));
    }
}
return dp[i][prev][k]=max(sub1,sub2);

}

int32_t main()
{
freopen("hps.in", "r", stdin);
freopen("hps.out", "w", stdout);
 cin>>n>>k;
m['H']=0;m['P']=1;m['S']=2;

memset(mat,0,sizeof(mat));
mat[0][2]=1;
mat[1][0]=1;
mat[2][1]=1;

FORE(i,0,n-1)
{
    char inp;cin>>inp;
    a[i]=m[inp];
}
FORE(i,0,100000)
{FORE(j,0,3)
{FORE(k,0,20)
{
dp[i][j][k]=-1;
}
}
}

int res=solve(0,3,k);
cout<<res;

return 0;
}