#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll a,b;
	cin>>a>>b;
	
	ll teams=0;
	while((a>=2&&b>=1)||(a>=1&&b>=2))
	{   
	    if(a>b)
		{a-=2;
		b-=1;
		teams++;
	    }
	    else
	    {
	    	a-=1;
	    	b-=2;
	    	teams++;
		}
	  }
	  cout<<teams; 
}
