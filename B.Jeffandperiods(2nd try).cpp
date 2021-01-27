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

vector<vector<int>>seq(1e5+9);
int main()
{
    int n;cin>>n;
    FOR(i,0,n)
    {
        int in;cin>>in;
        int cle=seq[in].size()-1;

        if(seq[in].size()==0)
        seq[in].pb(i);
        else if(seq[in].size()==1)
        seq[in].pb(i);
        else
        {
        if(seq[in][cle]==-1)
        continue;
         int d1=i-seq[in][cle];
         int d2=seq[in][cle]-seq[in][cle-1];
         if(d1==d2)
         seq[in].pb(i);
         else
         seq[in].pb(-1);
        }
    }
    int cnt=0;
    vector<pair<int,int>>ans;
   FOR(i,0,seq.size())
   { 
      if(seq[i].size()==0)
      continue;
      else if(seq[i].size()==1)
      {
          cnt++;
          int cle=seq[i].size();
          ans.pb({i,0});
      }
      else
      {
          if(seq[i][seq[i].size()-1]==-1)continue;
          cnt++;
          int cle=seq[i].size()-1;
          ans.pb({i,seq[i][cle]-seq[i][cle-1]});
      }
   }
   op(cnt);nl;
 for(auto ele:ans)
 {
     cout<<ele.first<<" "<<ele.second;nl;
 }

}