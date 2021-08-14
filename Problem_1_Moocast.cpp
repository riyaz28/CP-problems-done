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

struct edge
{
    int u,v,w;
};

class dsu
{ 
       //edge list representation
  int V;
  int*parent,*rankl;
  public:
    dsu(int V)
    { 
        this->V=V;
        parent=new int[V+1];
        rankl=new int[V+1];
          for(int i=1;i<=V;i++)
        {
            parent[i]=-1;
            rankl[i]=1;
        }
    }
    // void query(int x,int y)
    // {
    //  union_set(x,y);       
    // }
    int find_set(int x)
    {
        if(parent[x]==-1)
            return x;
        //path compression optimization
        return parent[x]=find_set(parent[x]); //rec call
    }
    void union_set(int x,int y)        //rank of leader
    {
      int s1=find_set(x);
      int s2=find_set(y);

      if(s1!=s2)   //optimization union by rank
      {   
          if(rankl[s1]<rankl[s2])
          {
           parent[s1]=s2;
           rankl[s2]=rankl[s1]+rankl[s2];       
          }
          else
          {
           parent[s2]=s1;
           rankl[s1]=rankl[s2]+rankl[s1];
          }
      }

    }
};

bool f(int x,const vector<edge>&e,const int & N)
{ 
    dsu g(N);
    for(auto ele:e)
    {
        if(ele.w<=x)
        {
            g.union_set(ele.u,ele.v);
        }
    }
    
    for(int i=1;i<=N;i++)
    {
        for(int j=i+1;j<=N;j++)
        {
            if(g.find_set(i)!=g.find_set(j))
            return false;
        }
    }
    return true;
}

int main()
{
    // freopen("moocast.in", "r", stdin);
	// freopen("moocast.out", "w", stdout);  
  int N;
  cin>>N;
   vector<pii>cord;
   for(int i=0;i<N;i++)
   {
       int x,y;cin>>x>>y;
       cord.pb({x,y});
   }
  vector<edge>e;
   for(int i=0;i<cord.size();i++)
   {
       for(int j=i+1;j<cord.size();j++)
       {
           int dx=cord[i].first-cord[j].first;
           int dy=cord[i].second-cord[j].second;
           e.pb({i+1,j+1,(dx*dx)+(dy*dy)});
       }
   }
  int l=0,r=1e8;
  int mid;
  int res=r;
  while(l<=r)
  {
     mid=(l+r)/2;
     if(f(mid,e,N))
     {
         res=min(res,mid);
         r=mid-1;
     }
     else
     {
         l=mid+1;
     }
  }  
cout<<res;
return 0;
}