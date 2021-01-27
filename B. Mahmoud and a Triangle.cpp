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


bool condn(int a1,int a2,int a3)
{
	return a1+a2>a3 and a2+a3>a1 and a3+a1>a2;
}

int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	FORE(i,0,n-1) cin>>a[i];
	sort(a.begin(),a.end());
	bool res=false;
	FORE(i,0,n-3) {
		if(condn(a[i],a[i+1],a[i+2])){
			res=true;break;
		}
	}
	if(res==true) cout<<"yes";
	else cout<<"no";
}
