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
 string s;
 int k;
 cin>>s>>k;
 int n=s.length();
 vector<int>a(n);
 FOR(i,0,n) {
 	a[i]=(int)(s[i]-'0');
 }
 k=min((n*(n-1)/2),k);
 FOR(i,0,n)
 { int ind=i;
   int res=a[i];
   if(k<1) break;
   FORE(j,i+1,i+k)
   {
   	if(j>n-1) break;
    if(a[j]>res)
   	{
   	 res=a[j];ind=j;	
	}
	}
	if(ind==i) continue;
	else{
		for(int l=ind;l>=i+1;l--)
		{
			swap(a[l],a[l-1]);
		}
		k-=(ind-i);
	}	
 }
 	FOR(i,0,n) cout<<a[i];
}
