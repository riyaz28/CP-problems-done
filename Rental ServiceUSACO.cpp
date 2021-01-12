#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int,int>a,pair<int,int>b)
{
	return a.second>b.second;
}

int main()
{
	int n,m,r;
	vector<ll>cowg(n+1,0);
	vector<pair<ll,ll>>store(m+1,0);
	vector<ll>rent(r+1,0);
	
	for(int i=1;i<=n;i++)
    cin>>cowg[i];
	
	auto it=cow
	sort(cowg.rbegin()+1,cowg.rend());
	vector<ll>pref(n);
	vector<ll>rentpref(r);
	

	pref[1]=cowg[1];
	for(int i=2;i<=n;i++)
	{
		pref[i]=pref[i-1]+cowg[i];
	}
	
	for(int i=1;i<=m;i++)
	cin>>store[i].first>>store[i].second;
	
	sort(store.begin()+1,store.end(),cmp);
	
	for(int i=1;i<=r;i++)
	cin>>rent[i];
	
	sort(rent.rbegin()+1,rent.rend());
	
	rentpref[1]=rent[1];
	for(int i=2;i<=r;i++)
	{
		rentpref[i]=rentpref[i-1]+rent[i];
	}
	
	ll res=0;
	
	//maximizing cases based on number of cows rented
	for(int i=0;i<=min(n,r);i++)
	{
		int end=n-1-i; //start here for renting cows with low milk
		
		ll cost1=0;
		ll curg=pref[end];
		int j=0;
		while(curg<=0||j==m-1)
		{
			ll qty=min(store[j].first,curg);
			curg-=qty;
			cost1+=qty*store[j].second;
			j++;
		}
		
		cost1+=rentpref[i];
	
	res=max(cost1,res);
	}
	
	cout<<res<<endl;
}
