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
    int n,k;
    cin>>n>>k;
    char ch[n+1][n+1];
    memset(ch,'S',sizeof(ch));

    if(n%2!=0)
    {
        int no=(n/2)+1;
        int ne=n/2;
        int mx=no*no+ne*ne;
        if(k>mx)
        {
            cout<<"NO";return 0;
        }
        
        FORE(i,1,n)
        {
         if(i%2!=0)
         {
             for(int j=1;j<=n&&k>=1;j+=2)
              {   k--;
                  ch[i][j]='L';
              }
              if(k==0)
              break;
         }
         else
         {
             for(int j=2;j<=n&&k>=1;j+=2)
              {   k--;
                  ch[i][j]='L';
              }
              if(k==0)
              break;
         }
        }
    }
    else
    {
         
        int mx=(n*n)/2;
        if(k>mx)
        {
            cout<<"NO";return 0;
        }
        
        FORE(i,1,n)
        {
         if(i%2!=0)
         {
             for(int j=1;j<=n&&k>=1;j+=2)
              {   k--;
                  ch[i][j]='L';
              }
              if(k==0)
              break;
         }
         else
         {
             for(int j=2;j<=n&&k>=1;j+=2)
              {   k--;
                  ch[i][j]='L';
              }
              if(k==0)
              break;
         }
        }
    }
    op("YES");nl;
    FORE(i,1,n)
    {FORE(j,1,n)
    {
     cout<<ch[i][j];
    }
    nl;
    }
}