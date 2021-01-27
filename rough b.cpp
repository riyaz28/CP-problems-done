#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<int>a(n);
    	for(int i=0;i<n;i++) cin>>a[i];
    	
    	int cnt=0;
        int hvh=0;
        int hv=0;
        if(n<=2)
        cout<<0<<endl;
        else
        {
		
    	for(int i=1;i<=n-2;i++)
    	{
    		if(a[i]>a[i+1]&&a[i]>a[i-1])
    		cnt++;
    		else if(a[i]<a[i+1]&&a[i]<a[i-1])
    		cnt++;
    		if(i>=2&&i+2<=n-1)
    		{  //hvh or vhv
    			if(a[i-2]<a[i-1]&&a[i-1]>a[i]&&a[i+1]>a[i]&&a[i+2]<a[i+1])
    			hvh++;
    			else if(a[i-2]>a[i-1]&&a[i-1]<a[i]&&a[i+1]<a[i]&&a[i+2]>a[i+1])
    			hvh++;
			}
			if(i>=1&&i+2<=n-1)
			{
				if(a[i-1]<a[i]&&a[i]>a[i+1]&&a[i+2]<a[i+1])
				hv++;
				else if(a[i-1]>a[i]&&a[i]<a[i+1]&&a[i+2]<a[i+1])
				hv++;
			}
		}
		if(hvh>=1)
		{
		  cout<<cnt-3<<endl;
		  continue;
		}
		else if(hv>=1)
		{
			cout<<cnt-2<<endl;
			continue;
		}
		else
		{   
		    if(cnt<=0)
		    cout<<0<<endl;
		    else
			cout<<cnt-1<<endl;
			continue;
		}
	}
}
    
}
