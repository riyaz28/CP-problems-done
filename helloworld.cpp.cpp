#include<bits/stdc++.h>
using namespace std;


int main()
{
	int x,y,m;
	cin>>x>>y>>m;
	
	int xmax=m/x;
	int ymax=m/y;
	
	int res=0;
	for(int i=0;i<=xmax;i++)
	{for(int j=0;j<=ymax;j++)
	{ //cout<<i<<" "<<j<<" ";
		if(i*x+j*y<=m)
	  	res=max(res,i*x+j*y);
	}
	}
	cout<<res<<endl;
	
}
