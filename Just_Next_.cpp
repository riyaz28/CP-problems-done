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

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        stack<int>a;
        stack<int>b;
        FORE(i,1,n)
        {
            int ele;cin>>ele;
            a.push(ele);
        }
        bool res=false;
        while(a.size()>1)
        {
            int unit=a.top();
            a.pop();
            int ten=a.top();
            a.pop();
            if(unit<=ten or res==true)
            {
                b.push(unit);
                a.push(ten);
                continue;  
            }
            else if(unit>ten and res==false)
            {
                b.push(ten);
                b.push(unit);
                res=true;
            }
        }
        if(a.size()==1)
        {
            int ele=a.top();
            b.push(ele);
            a.pop();
        }
        while(b.size()>0)
        {
            int ele=b.top();
            cout<<ele;
            b.pop();
        }
       nl;
    }
}