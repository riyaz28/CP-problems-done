#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
 	int n,m;
 	cin>>n>>m;
 	vector<int>a(n);
 	vector<int>b(m);
 	
 	for(int i=0;i<n;i++)
 	cin>>a[i];
 	
 	for(int i=0;i<m;i++)
 	cin>>b[i];
 	
 	int sum=0;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]<b[a[i]])
 		{
 		   sum+=a[i];
		}
		else
		{
			sum+=b[a[i]];
			b[a[i]]=0;
		}
 		
	 }
	 cout<<sum<<endl;
 }
	
}
