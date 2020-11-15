#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {string s;
    cin>>s;
    int n=s.length();
    int cnt=0;
    vector<int>dp(n,0);
    for(int i=0;i<n;i++)
     {string temp="";
    temp+=s[i-2];
    temp+=s[i-1];
    temp+=s[i];

    if(temp=="one"||temp=="two")
    {
        s.erase(i,1);
        cnt++;
        cout<<i+cnt<<" ";
        i--;
        n--;
    }

     }
     if(cnt==0)
     {
         cout<<cnt<<endl;
         cout<<endl;
     }
     else
     {
        cout<<endl;
        cout<<cnt<<endl;
     }

    }
    return 0;
}













