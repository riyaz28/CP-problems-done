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

struct ch
{
	int a,b;
};
bool cmp(ch x,ch y)
{
	return abs(x.a-x.b)<abs(y.a-y.b);
}
int main()
{
	int n;
	cin>>n;
	vector<ch>days;
	FORE(i,1,n) {
		int in1,in2;
		cin>>in1>>in2;
		days.pb({in1,in2});
	}
	sort(pb.begin(),pb.end(),cmp);
	string s1="";
	string s2="";
	ll sum1a,sum1b,sum2a,sum2b;
	sum1a=sum1b=sum2a=sum2b=0;
	sum1a+=days[0].a;
	sum2b+=days[0].b;
	s1+="A";
	s2+="B";
	FOR(i,1,n)
	{
		if(days[i].a>days[i].b)
		{
			
		}
	}
	
}
