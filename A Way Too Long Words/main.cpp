#include <bits/stdc++.h>
using namespace std;

int main()
{  int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    string res="";
    if(s.length()>10)
    {
        int n=s.length()-2;
        stringstream ss;
        ss<<n;
        string ch;
        ss>>ch;
        res+=s[0];
        res+=ch;
        res+=s[s.length()-1];
    }
    else
    {
        res=s;
    }
    cout<<res<<endl;
}
    return 0;
}
