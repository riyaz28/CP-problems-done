#include<bits/stdc++.h>
using namespace std;

struct trip
{
	int x,y,z,w;
}
bool cmp1(quad a,quad b)
{
	return ((a.x*a.x)+(a.y*a.y))<((b.x*b.x)+(b.y*b.y));
}
bool cmp2(quad a,quad b)
{
	return a.z<b.z;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ int n;
		vector<quad>a;
		
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			a.push_back({x,y,i,0});
		}
		sort(a.begin(),a.end(),cmp1);
		
		a[0].w=-1;
		for(int i=1;i<n;i++)
        {
        	if(a[0].x<a[i].x&&a[0].y<a[i].y)
        	{
        		a[i].w=a[0].z;
			}
			else if(a[0].y<a[i].x&&a[0].x<a[i].y)
			{
				a[i].w=a[0].z;
			}
			else
			{
				a[i].w=-1;
			}
	    }
		sort(a.begin(),a.end(),cmp2);
		
		for(auto ele:a)
		{
			cout<<a.z<<" ";		
			}
			cout<<endl;	
	}
}
//-1 1 1 1 1 -1 1 -1 -1
//9
//5 1
//10 5
//8 8
//7 5
//8 2
//10 1
//9 8
//4 4
//3 4
