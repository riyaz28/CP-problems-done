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


// important! convert all ints to doubles for precision hence leads to AC
int main()
{
 double vp,vd,t,f,c;
 cin>>vp>>vd>>t>>f>>c;

 double gd=0;
 double dd=0;
 int bij=0;

 gd+=t*vp;
if(vd<=vp)
{
    op(0);nl;
    return 0;
}

 while(gd<c)
{
  double t1=(gd)/(vd-vp);
  
  if(gd+t1*vp<c)
  {
     bij++;
     gd+=(t1)*vp;
     dd=gd;
     double t2=dd/vd;
     gd+=(t2+f)*vp;
     dd=0; 
  }
  else
  { break;
      gd+=t1*vp;
      dd+=t1*vd;
  }
}
op(bij);nl;

}