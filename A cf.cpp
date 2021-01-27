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
     
     int j=9;
     int med=n/2;
     if(n%2!=0)
     med-=1;
     if(n<=10)
     { 
     int j=9;
	 for(int i=1;i<=n;i++)
     {
     	if(i<=med)
      	{cout<<j;
      	j--;
         }
      	else
      	{j++;
      	 cout<<j;
		}
	 }
     }
     else
     {
     	cout<<9876<<5678<<90;
     	int j=1;
     	int rem=n%10;
     	for(int i=1;i<=rem;i++)
     	{
     		if(j==9)
     		j=0;
     		
     		cout<<j;
     		j++;
     		
		 }
	 }
    }
    
}
