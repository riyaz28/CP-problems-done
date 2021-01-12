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
		
		char con[n][m];
		
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			cin>>con[i][j];
		}
		}
		
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(con[i][m-1]=='R')
			cnt++;
		}
		for(int i=0;i<m;i++)
		{
		if(con[n-1][i]=='D')
			cnt++;
		}
		cout<<cnt<<endl;
	}
}
