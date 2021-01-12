#include<bits/stdc++.h>
using namespace std;
#define ll long long
const double eps=1e-7;


bool f(vector<double>x,vector<double>v,double t)
{
	double x1min=1e9;
	double x1max=-1e9;
	for(int i=0;i<x.size();i++)
	{
		x1max=max(x[i]-(v[i]*t),x1max);
		x1min=min(x[i]+(v[i]*t),x1min);
	}
	
	return x1max<=x1min;
}

int main()
{
	int n;
	cin>>n;
	vector<double>x(n);
	vector<double>v(n);
	for(int i=0;i<n;i++) cin>>x[i];
	for(int i=0;i<n;i++) cin>>v[i];
	
	double s=0;
	double e=1e9;
	double ans;
	double mid;
	while(s<=e)
    {
     mid=(s+e)/2;
	 if(f(x,v,mid)==true)
	 {
	 	ans=mid;
	 	e=mid-1.0;
	 }
	 else
	 {
	 	s=mid+1.0;
	 }	
    }
    cout<<fixed<<showpoint;
	cout<<setprecision(8)<<ans<<endl;	
}
