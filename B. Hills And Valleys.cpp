#include<bits/stdc++.h>
using namespace std;



bool isval(int i,vector<int>a)
{
	return a[i]<a[i+1] and a[i-1]>a[i] and i>=1 and i<=a.size()-2;
}
bool ishil(int i,vector<int>a)
{
	return a[i]>a[i+1] and a[i-1]>a[i] and i>=1 and i<=a.size()-2;
}
//kinda like prefix sum
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  vector<int>a(n);
	  vector<int>is(n,0);
	  
	  int res=0;
	  for(int i=0;i<=n-1;i++)
	  {
	  	cin>>a[i];
	  }
	  for(int i=1;i<=n-2;i++)
	  {
	  	if(isval(i,a) or ishill(i,a))
	  	{is[i]=1;
	  	res++;
	    } 
	  }
	  
	  
	  for(int i=1;i<=n-2;i++)
	  {
	  	int temp=a[i];
	  	//calculate across all cases if you make a change (change also 2 cases equal to 2 elements)
	  	a[i]=a[i+1];
	  	res=min(res,res-(is[i-1]+is[i]+is[i+1])+(isval(i)+ishil(i)+isval(i+1),ishil(i+1)+isval(i-1)+ishil(i-1)));
	  	a[i]=a[i-1];
	  	res=min(res,res-(is[i-1]+is[i]+is[i+1])+(isval(i)+ishil(i)+isval(i+1),ishil(i+1)+isval(i-1)+ishil(i-1)));
	  	
	  	a[i]=temp;
	  }
	  	cout<<res<<endl;
	}
}
