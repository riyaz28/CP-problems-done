#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x
#define ip(x) cin>>x
#define ipl(s) getline(cin,s)
#define nl cout<<endl
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)
 //accumulate a's to one side and b's to other side each time and finally at last index according to condn
 //obtain either eg:aaabbbb or bbbbaaa
int main()
{
	string s;
	ipl(s);
	
	int n=s.length();
	if(n==1) 
	{cout<<0;exit(0);}
	FORE(i,0,s.length()-2)
	{
	 if(s[i]==s[i+1])
	 {
	  	cout<<0<<" ";
	  	continue;
	 }
	 else if(s[i]=='a'&&s[i+1]=='b')
	 {
	 	cout<<1<<" ";
	 	string temp=s.substr(0,i+1);
	 	reverse(all(temp));
	 	s.replace(0,i+1,temp);
	 	continue;
	 }
	 else if(s[i]=='b'&&s[i+1]=='a')
	 {
	 	cout<<1<<" ";
	 	string temp=s.substr(0,i+1);
	 	reverse(all(temp));
	 	s.replace(0,i+1,temp);
	 }
	}
	string temp=s;
	reverse(all(temp));
	if(temp<=s)
	{
		cout<<1;nl;
	}
	else
	{
		cout<<0;nl;
	}
	
	}
	
