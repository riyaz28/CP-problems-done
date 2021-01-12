#include<bits/stdc++.h>
using namespace std;

int ret(int x,int y)
{
 int l,b;
 l=x;
 b=y;
 int res=1;
 while(l%2==0||b%2==0)
 {
 	if(l%2==0)
 	{
 	 res*=2;
 	 l/=2;
	}
	else if(b%2==0)
	{
		res*=2;
		b/=2;
	}
 }
return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
    	int l,b,n;
    	cin>>l>>b>>n;
    	int res=ret(l,b);
    	if(res>=n)
    	cout<<"YES"<<endl;
    	else
    	cout<<"NO"<<endl;
	}
}
