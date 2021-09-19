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


void solve(string in,string temp,int i,int cnt,int pnum,vector<string>&fin)
{

 if(cnt>3)
 {
     return;
 }   
 if(i==in.length())
 {
  if(cnt==3)
  {
      temp=temp+to_string(pnum);
      fin.push_back(temp);
      cout<<temp<<endl;
      return;
  }
 return;
 }

int nnum=pnum*10+(in[i]-'0');


if(nnum<=255)
{

   string nn=to_string(nnum); 
   string temp1=temp+nn+"."; 
   solve(in,temp1,i+1,cnt+1,0,fin);
   solve(in,temp,i+1,cnt,nnum,fin);
}

    return;
}


vector<string> Solution(string A) 
{
vector<string>fin;   
solve(A,"",0,0,0,fin);
return fin;
}

int32_t main()
{
    string inp;cin>>inp;
    vector<string>res=Solution(inp);
  return 0;
}