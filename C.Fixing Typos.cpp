#include<bits/stdc++.h>
using namespace std;

bool op1(string s)
{
	for(int i=0;i<s.length();i++)
	{
	 if(s[i]==s[i+1]&&s[i+1]==s[i+2])
	 return true;	
	}
  return false;
}
bool op2(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s[i+1]&&s[i+2]==s[i+3]&&s[i]!=s[i=2])
		return true;
	}
	return false;
}




int main()
{
	string s,res;
	cin>>s;
	



 for(int i=0;i<s.length();i++)
 {
    
 }
}


cout<<s;
}
