#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x;
#define ip(x) cin>>x;
#define ipl(s) getline(cin,s);
#define nl cout<<endl;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

// you can optimize it more by using binary search in 2nd part(but due to less constraints jsut go with LS)

struct req
{
	int c,p,i;
};
bool cmp(req a,req b)
{
	return a.p>b.p;
}
int main()
{
	int n;ip(n);
	vector<req>reqs;
	FORE(j,1,n)
	{
		int inp1,inp2;
		ip(inp1);ip(inp2);
		reqs.pb({inp1,inp2,j});
	}
	int m;
	ip(m);
	vector<pii>tables;
	FORE(i,1,m)
	{
		int cap;ip(cap);
		tables.pb({cap,i});
	}
	sort(reqs.begin(),reqs.end(),cmp);
	sort(tables.begin(),tables.end());
	int cnt,sum;
	cnt=sum=0;
	vector<pii>answer;
	FOR(j,0,reqs.size())
	{
		int qc=reqs[j].c;
		int ind=-1;
		FOR(k,0,tables.size())
		{
			if(tables[k].first>=qc)
			{
				ind=k;
				break;
			}
		}
		if(ind!=-1)
	    { auto it=tables.begin()+ind;
	    	sum+=reqs[j].p;
	    	cnt++;
	    	answer.pb({reqs[j].i,it->second});
	    	tables.erase(it);
		}
		else continue;
	}
	op(cnt);cout<<" ";op(sum);
	nl;
	for(auto ele:answer)
	{
		cout<<ele.first<<" "<<ele.second;nl;
	}
	
return 0;	
}
