#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
	int n;
	cin>>n;
	vector<ll>a(n);
	
	for(int i=0;i<n;i++) cin>>a[i];
 
      ll res=a[0];
      for(int i=1;i<n;i++)
	  res=__gcd(res,a[i]);	
      
      
      ll cnt=0;
      //vector<ll>fact;
      //fact.push_back(1);
      	for(int i=1;i<=sqrt(res);i++)
      	{
      		
      	  if(res%i==0)
			{   
			    cnt++;
			}
			if(i!=res/i)
			{
			    cnt++;
			}
			 	
		}
		cout<<cnt;
	  }
