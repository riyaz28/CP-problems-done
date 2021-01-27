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

struct rect
{
	int x1,y1,x2,y2,x3,y3,x4,y4;
	public:
	rect(int a1,int b1,int a3,int b3)
	{
		x1=a1;y1=b1;x3=a3;y3=b3;
		x2=a1;y2=b3;x4=a3;y4=b1;
	}	
};
int main()
{
	int t;ip(t);
	
	while(t--)
	{
	 int x1,x2,x3,x4;
	 cin>>x1>>x2>>x3>>x4;
	 int y1,y2,y3,y4;
	 cin>>y1>>y2>>y3>>y4;
	 rect a(x1,x2,x3,x4);
	 rect b(y1,y2,y3,y4);
	 	int xll=max(a.x1,b.x1);
	 	int yll=max(a.y1,b.y1);
	 	int xrr=min(a.x3,b.x3);
	 	int yrr=min(a.y3,b.y3);
	 nl;	
	 if(xll<xrr&&yll<yrr)
	 cout<<xll<<" "<<yll<<" "<<xrr<<" "<<yrr<<" ";
	 else
	 {
	     cout<<"No Overlap";
	 }
	 nl;
	}
	return 0;	
	
}


