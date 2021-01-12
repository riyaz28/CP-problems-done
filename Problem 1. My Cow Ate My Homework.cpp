#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	int n;
	cin>>n;
	vector<int>a(n+1);
	vector<int>pref(n+1,0);
	vector<int>minp(n+1,0);
	vector<pair<int,int>>grades;
	minp[0]=INT_MAX;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	for(int i=1;i<=n;i++) pref[i]=pref[i-1]+a[i];
	
	minp[n]=a[n];
	for(int i=n-1;i>=1;i--) minp[i]=min(minp[i+1],a[i]);
	
	int res=0;
	
	for(int k=1;k<=n-2;k++)
	{
		int temp=pref[n]-pref[k]-minp[k+1];
		int grade=temp/(n-k-1);
		grades.push_back({grade,k}); 
	}
	sort(grades.rbegin(),grades.rend());
	
	for(int i=0;i<grades.size();i++)
	{
	    if(grades[i].first<grades[0].first)
	    break;
	    else
	    {
	        cout<<grades[i].second<<" ";
	    }
	}

	

}
