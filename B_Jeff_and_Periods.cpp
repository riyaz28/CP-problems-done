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
 int n;cin>>n;
 vector<int>a(n);FOR(i,0,n)cin>>a[i];
 map<int,vector<int>>m1;
 vector<int>in{0};
 m1[a[0]]=in;
 FOR(i,1,n) 
 {
  if(m1.find(a[i])==m1.end())
  {
    vector<int>st1{i};
    m1[a[i]]=st1;
  }
  else
  {
      vector<int>r1=m1[a[i]];
      int end=r1.size()-1;
      
      if(r1[end]==-1)
      continue;

      if(r1.size()==1)
      {
      r1.pb(i);
      m1[a[i]]=r1;
      }
      else
      {
          int d1=i-r1[end];
          int d2=r1[end]-r1[end-1];
          if(d1==d2)
          {
          r1.pb(i);
          m1[a[i]]=r1;
          }
          else
          {
            r1.pb(-1);
            m1[a[i]]=r1;
          }
      }
  }

 }

 int cnt=0;
 vector<pair<int,int>>res;
 for(auto ele:m1)
 {
  int x1=ele.first;
  vector<int>b=ele.second;
  int end=b.size()-1;
  if(b[end]!=-1)
  {cnt++;
      if(b.size()==1)
      res.pb({x1,0});
      else
      res.pb({x1,b[end]-b[end-1]});
  }
}
if(cnt==0)
{op(0);return 0;}

cout<<cnt;nl;
FOR(i,0,res.size())
{
    cout<<res[i].first<<" "<<res[i].second;
    nl;
}

}