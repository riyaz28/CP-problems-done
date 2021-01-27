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

// trick question(no need og big int by the way)

bool ch10(string s)
{
    if(s[0]!='1') return false;

    FORE(i,1,s.length()-1)
    {
       if(s[i]!='0') return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int p=0;
    string dif="";
    int c0=0;
    FORE(i,1,n)
    {
        string s;cin>>s;

        if(s.length()==1 and s[0]=='0')
         {c0++;break;}

        if(ch10(s) or (s.length()==1 and s[0]=='1'))
        {
            if(s.length()==1 and s[0]=='1') continue;

            int res=s.length()-1;
            p+=res;
        }
        else
        {
            dif=s;
        }
    }
    
    if(c0>=1)
    {cout<<0;return 0;}

   // cout<<p;nl;
    if(dif!="")
    {
        cout<<dif;
        FORE(i,1,p)
        {
        cout<<'0';
        }
        return 0;
    }
    else
    {
        cout<<'1';
        FORE(i,1,p)
        {
        cout<<'0';
        }
        return 0;
    }

    nl;
    return 0;
}