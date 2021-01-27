#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x;
#define ip(x) cin>>x;
#define nl cout<<endl;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

int main()
{
	string s;ip(s);
	int m;ip(m);
	
	FORE(i,1,m)
	{
	  int pos;ip(pos);
	  int rpos=s.length()-pos+1;
	  int len=rpos-pos+1;
	  pos-=1;
	  string res=s.substr(pos,len);
	  reverse(res.begin(),res.end());
	  s.replace(pos,len,res);
	}
	op(s);
	nl;
	
}
