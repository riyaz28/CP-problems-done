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
 
bool isSubSequence(string str1, string str2, int m, int n) 
{ 
     
    if (m == 0) return true; 
    if (n == 0) return false; 
  
    
    if (str1[m-1] == str2[n-1]) 
        return isSubSequence(str1, str2, m-1, n-1); 
 
    
    return isSubSequence(str1, str2, m, n-1); 
} 
 
int main()
{
    string s;ipl(s);
    string t;ipl(t);
    string s1=s;string t1=t;
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
     vector<int>m1(27,0);
 
     FOR(i,0,s1.length())
     {
         m1[(int)(s1[i]-'a')]++;
     }
 
 
    if(s1==t1)
    {
        op("array");nl;
    }
    else if(s.length()<t.length())
    {
      op("need tree");nl;
    }
    else
    {
        int cnt=0;
      FOR(i,0,t1.length())
      {
          if(m1[(int)(t1[i]-'a')]>=1)
          { cnt++;  
            m1[t1[i]-'a']--;   
          }
      }
 
      if(cnt==t1.length())
      {
          bool res=true;
          auto li=0;
       if(isSubSequence(t,s,t.length(),s.length())){op("automaton");nl;}
       else {op("both");nl;}
      }
      else
      {
          op("need tree");nl;
      }
    }
return 0;
}