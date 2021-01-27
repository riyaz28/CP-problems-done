#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define setp(n) cout<<fixed<<setprecision(n)
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x
#define ip(x) cin>>x
#define ipl(s) getline(cin,s)
#define nl cout<<endl
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
    
	stack<char>a;
	stack<char>res;
	a.push(s[0]);
	for(int i=1;i<=s.length()-1;i++)
	{
        if(a.empty())
        {
            a.push(s[i]);
            continue;
        }
		char t1=a.top();
		if(s[i]==t1)
		{
			a.pop();
		}
		else
		{
			a.push(s[i]);
		}
	}
	if(a.size()==0)
	{cout<<"KHALI";
    nl;
    continue;}
	else
	{
		while(a.size()>0)
		{
			char ch=a.top();
			res.push(ch);
			a.pop();
		}
		while(res.size()>0)
		{	
			char ch=res.top();
			cout<<ch;
			res.pop();
		}
	}
	nl;
}
return 0;
}