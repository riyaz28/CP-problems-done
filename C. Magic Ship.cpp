#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
struct co
{
	ll x,y;
};
 
bool f(ll x1,ll y1,ll x2,ll y2,ll days,vector<co>m,int n)
{
ll prod=(days)/(n);
ll rem=(days)%(n);
 
if(rem>0)
{x1+=((m[n-1].x)*prod+(m[rem-1].x));
y1+=((m[n-1].y)*prod+(m[rem-1].y));
}
else if(rem==0)
{x1+=(m[n-1].x)*prod;
y1+=(m[n-1].y)*prod;
}
	ll res=abs(x1-x2)+abs(y1-y2);
	
	return res<=days;
}
 
int main()
{
	ll x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	int n;
	cin>>n;
	string str;
	cin>>str;
	vector<co>m(n);
	
	if(str[0]=='U'){m[0].x=0;m[0].y=1;}
	if(str[0]=='D'){m[0].x=0;m[0].y=-1;}
	if(str[0]=='L'){m[0].x=-1;m[0].y=0;}
	if(str[0]=='R') {m[0].x=1;m[0].y=0;}
 
	for(int i=1;i<n;i++)
	{
	if(str[i]=='U'){m[i].x=m[i-1].x;m[i].y=m[i-1].y+1;}
	if(str[i]=='D'){m[i].x=m[i-1].x;m[i].y=m[i-1].y-1;}
	if(str[i]=='L'){m[i].x=m[i-1].x-1;m[i].y=m[i-1].y;}
	if(str[i]=='R') {m[i].x=m[i-1].x+1;m[i].y=m[i-1].y;}	
	}
 
	
 
	
	ll s=0;
	ll e=1e18;
	ll ans=1e18;
	ll mid;
	while(s<=e)
	{
		 mid=(s+e)/2;
		
		if(f(x1,y1,x2,y2,mid,m,n)==true)
		{
			ans=min(mid,ans);
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	
	if(ans==1e18)
	cout<<-1;
	else
	cout<<ans<<endl;
	
}
