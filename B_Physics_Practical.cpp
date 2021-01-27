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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    vector<int>a(n);
    FOR(i,0,n) 
    {
     cin>>a[i];
    }
  sort(all(a));
  int moves=INT_MAX;
  FOR(i,0,n)
  {
    auto it=upper_bound(all(a),a[i]*2);
    int ind=it-a.begin()-1;
    int len=ind-i+1;
    moves=min(moves,n-len);
  }
  op(moves);nl;
}