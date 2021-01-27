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
const int N=1e6+1;
int dp[N];
int main()
{
    int t;
    cin>>t;
     dp[2020]=1;dp[2021]=1;
        FORE(i,2021,N)
        {
            if(dp[i-2020]==1)
            {
                dp[i]=1;
            }
            else if(dp[i-2021]==1)
            dp[i]=1;
        }
    while(t--)
    {
        int n;
        cin>>n;

        if(n<2020)
        {op("NO");nl;continue;}
        if(dp[n]){cout<<"YES";}
        else {cout<<"NO";}
        nl;
    }
    return 0;
}