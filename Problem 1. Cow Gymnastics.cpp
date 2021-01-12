#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("gymnastics.in","r",stdin);
	freopen("gymnastics.out","w",stdout);
	
	int n,k;
	cin>>n>>k;
	
	int a[10][20];
	
	for(int i=0;i<n;i++)
	{for(int j=0;j<k;j++)
		{
			cin>>a[i][j];
		}
	}
	
	int res=0;
  for(int i=0;i<n;i++)
  {for(int j=i+1;j<n;j++)
  { 
   int cnti,cntj;
   cnti=cntj=0;
   for(int col=0;col<k;col++)
   {
   	if(a[i][col]>a[j][col])
   	{
   		cnti++;
	}
	else if(a[j][col]>a[i][col])
	{
		cntj++;
	}
	if(cnti==k||cntj==k)
	res++;
	
   }
  }
  }
	cout<<res<<endl;
}
