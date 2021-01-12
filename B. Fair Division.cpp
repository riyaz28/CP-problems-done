#include<bits/stdc++.h>
using namespace std;

//note:brute force only works for n<=20


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		 int n1,n2;
		 n1=n2=0;
		for(int i=0;i<n;i++)
		{ int inp;
		  cin>>inp;
		  inp==1?n1++:n2++;
	    }
	    bool res=false;
	    for(int i=0;i<=n1;i++)
        {for(int j=0;j<=n2;j++)
        {
           	if((1*i)+(2*j)==1*(n1-i)+2*(n2-j))
           	{res=true;
           	 goto A;
            }
           	else if((1*i)+1*(n1-i)==2*j+2*(n2-j))
           	{res=true;
           	 goto A;
             }
           	else if((1*i)+2*(n2-j)==(2*j)+1*(n1-i))
           	{res=true;
           	 goto A;
             }
		}
		}
		A:	    
	    if(res==true)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    
	    cout<<endl;
	}
	
}
