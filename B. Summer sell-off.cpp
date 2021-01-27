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

struct d
{
	ll ki,li;
};
bool cmp(d a,d b)
{
	//sort based in difference in products sold desc (final - initial)
	return min(2*a.ki,a.li)-min(a.ki,a.li)>min(2*b.ki,b.li)-min(b.ki,b.li);
}

int main()
{
 int n,f;
 cin>>n>>f;
 vector<d>days;
 
 FORE(i,1,n){
 	ll in1,in2;
 	cin>>in1>>in2;
 	days.pb({in1,in2});
 }
 sort(days.begin(),days.end(),cmp);
 
FORE(i,0,f-1)
{
	days[i].ki*=2;
}
ll res=0;
FORE(i,0,n-1)
{
	res+=min(days[i].ki,days[i].li);
}
cout<<res<<endl;
}
