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
	int n;ip(n);
	vector<ll>a(n);
	FOR(i,0,n){ip(a[i]);}
	set<ll>s1;
	FOR(i,0,n)s1.insert(a[i]);
	//sort(a.begin(),a.end());
	if(s1.size()>=4)
	{
	    op("NO");
	}
	else
	{
	    int n=s1.size();
	    vector<ll>b(n);
	    int i=0;
	    for(auto ele:s1)
	    {  
	        b[i]=ele;i++;
	    }
	    if(b.size()==3)
	    {
	        if(b[2]-b[1]==b[1]-b[0])op("YES");
	        else op("NO");
	    }
	    else
	    {
	        op("YES");
	    }
	    
	}
}
 
