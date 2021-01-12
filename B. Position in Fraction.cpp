#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll mx=1e5+1;

//max number of period of decimal of a/b= b(by pigeonhole principle) 
//then long division


int main()
{
	ll a,b;
	ll c;
	cin>>a>>b>>c;
	ll i=1;
	
	
	if(a>=b)
	 a%=b;
	 else
	 a*=10;
	
	if(a==0&&b==0) 
    cout<<-1<<endl;
    else
    {
	while(i<=mx)
	{ //cout<<a<<endl;
		ll cur;
		if(a>=b)
		{
		 
	     cur=a/b;
	     a%=b;
	     if(cur==c)
	     {
	     	cout<<i<<endl;
			 return 0;
		 }
		 i++;
		 continue;
	    }
	    else if(a<b)
	    {
	     a*=10;
	     cur=0;
	     
	     if(cur==c)
	     {
	     	cout<<i<<endl;
	     	return 0;
		 }
		 i++;
		 continue;
		}
	}
}
	
	cout<<-1<<endl;
	return 0;
}
