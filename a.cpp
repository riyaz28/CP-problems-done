#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  double x;
  cin>>n>>x;
  vector<double>a(n);
  
  
  ll sum=0;
  for(int i=0;i<n;i++)
  {cin>>a[i];
   sum+=a[i];
  }
  	ll maxm=ceil(sum/(double)x);
  	
  	ll minm=0;
  	for(int i=0;i<n;i++)
  	{
  		minm+=ceil(a[i]/(double)x);
	}
	cout<<min(minm,maxm)<<" "<<max(maxm,minm)<<endl;
 }
	
}
