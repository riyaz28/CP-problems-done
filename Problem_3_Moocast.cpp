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

vector<int>adj[200];
bool vis[200];
int temp;

void dfs(int i)
{
  vis[i]=1;
  //cout<<i<<" ";
  for(auto child:adj[i])
  {
     if(!vis[child])
     {  
         temp++;
         dfs(child);
     }
  }

}

bool l1(int x1,int y1,int r,int x2,int y2)
{
 int dx=abs(x2-x1);
 int dy=abs(y2-y1);
 return dx*dx+dy*dy<=r*r;

}

struct cow{
    int x,y,p;
};

int main()
{
	freopen("moocast.in", "r", stdin);
	freopen("moocast.out", "w", stdout);

 int n;ip(n);
 vector<cow>a(n);
FORE(i,0,a.size()-1)
{
  cin>>a[i].x>>a[i].y>>a[i].p;
}
  for(int i=0;i<a.size();i++)
  {for(int j=0;j<a.size();j++)
  {
    if(j!=i)
    {  
       if(l1(a[i].x,a[i].y,a[i].p,a[j].x,a[j].y))
        {
         adj[i].pb(j);
        }
    }
  }
}
int res=1;
FORE(i,0,n-1)
{
  temp=1;
  fill(vis,vis+n,0);
  dfs(i);
  res=max(res,temp);
  
}
op(res);

}