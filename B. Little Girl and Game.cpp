#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define nl cout<<endl;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

// we want n-1 pairs of even chars and 1 pair of odd chars
int main()
{
  string s;
  cin>>s;
  unordered_map<char,int>m;
  
  FOR(i,0,s.length())
  {
  	m[s[i]]++;
  }
  int ne,no;
  ne=no=0;
  for(auto ele:m)
  {
  	ele.second%2!=0?no++:ne++;
  }
  if((ne==m.size()-1 and no==1) or ne==m.size() or m.size()==1)
  cout<<"First"<<endl;
  else
  {
  	int res=ne*2+(no-1);
  	if(res%2==0) {cout<<"First";nl;}
  	else {cout<<"Second";nl;}
  }
	
}
