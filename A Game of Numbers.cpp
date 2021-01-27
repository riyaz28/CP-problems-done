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
unordered_map<int,int>f;
unordered_map<int,int>g;


void NGE(vector<int>a)
{
  stack<int>s;
  int n=a.size();
  s.push(a[i]);
  int ti=0;
 FORE(i,1,a.size()-1)
 {
     if(s.empty())
     {s.push(a[i]);continue;}

    int temp=s.top();
    if(a[i]>temp)
    {
    while(a[i]>temp)
     {s.pop();
     f[ti]=a[i];
     s.push(a[i]);
     ti=i;
     temp=s.top();
     }
    }
    else
    {
      s.push(a[i]);
      ti=i;  
    }
 }
}

void NSE(vector<int>a)
{
  stack<int>s;
  int n=a.size();
  s.push(a[i]);
  int ti=0;
 FORE(i,1,a.size()-1)
 {
     if(s.empty())
     {s.push(a[i]);continue;}

    int temp=s.top();
    if(a[i]<temp)
    {
     s.pop();
     g[ti]=a[i];
     s.push(a[i]);
     ti=i;
    }
    else
    {
      s.push(a[i]);
      ti=i;  
    }
 }
}

int main()
{
	int n;
    cin>>n;  
    vector<int>a;
    FORE(i,1,n)
    {
     int inp;
    a.pb(inp);
     cin>>inp; 
     f[i+1]=0;
     g[i+1]=0;
    }
    NGE(a);
    
   
}