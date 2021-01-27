#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

int main()
{
	int n;
	cin>>n;
	vector<ll>a(n+1,0);
	FORE(i,1,n) cin>>a[i];
	vector<ll>b=a;
	sort(b.begin()+1,b.end());
	vector<ll>prefa(n+1,0);
    vector<ll>prefb(n+1,0);
    FORE(i,1,n) {prefa[i]=prefa[i-1]+a[i];prefb[i]=prefb[i-1]+b[i];}
    int m;cin>>m;
    FORE(i,1,m)
    {
    	int t,l,r;
    	cin>>t>>l>>r;
    	int res;
    	t==1?res=prefa[r]-prefa[l-1]:res=prefb[r]-prefb[l-1];
    	cout<<res<<endl;
	}
    
	}

