#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n=s.length()/2;

    for(int i=1;i<=n;i++)
    {
        int index=s.find("WUB");
        if(index<s.length())
        {s.erase(index,3);
         s.insert(index," ");
        }
    }
   if(s[0]==' ')
   {
       s.erase(0,1);
   }
   if(s[s.length()-1]==' ')
   {
       s.erase(s.length()-1,1);
   }
    cout<<s<<endl;
    return 0;
}
