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
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    int dpr[n+1][m+1]={0};
    int dpc[n+1][m+1];
    memset(dpc,0,sizeof(dpc));
    int res[n+1][m+1];
     memset(res,0,sizeof(dpc));

    FORE(i,1,n)
    {FORE(j,1,m)
    {
     cin>>a[i][j];
    }  
    }
    //row pref
    FORE(i,1,n)
    {FORE(j,1,m)
    {
      dpr[i][j]=dpr[i][j-1]+a[i][j];
      //cout<<dpr[i][j]<<" ";
    }
    }
    // col pref
     for(int j=1;j<=m;j++)
    { for(int i=1;i<=n;i++)
    {
     dpc[i][j]=dpc[i-1][j]+a[i][j];
    }
    }

   FORE(i,1,n)
   {FORE(j,1,m)
    {
        if(a[i][j]==0)
        continue;
        
        if(a[i][j]==1)
        {
         bool flag=false;
         FORE(i,1,n)
         {
           if(a[i][j]==1 and (dpr[i][j-1]==j-1 and dpr[i][m]-dpr[i][j]==m-j and dpc[i-1][j]==i-1 and dpc[n][j]-dpc[i][j]==n-i))
           {
               flag=true;
               res[i][j]=1;
               break;
           }
         }
         FORE(j,1,m)
         {
            if(a[i][j]==1 and (dpr[i][j-1]==j-1 and dpr[i][m]-dpr[i][j]==m-j and dpc[i-1][j]==i-1 and dpc[n][j]-dpc[i][j]==n-i))
           {
               flag=true;
               res[i][j]=1;
               break;
           }
         }
          if(flag==false)
          {cout<<"NO";
          return 0;
          }


         }
        

        }
    }
    op("YES");nl;
     FORE(i,1,n)
     {FORE(j,1,m)
     {
      cout<<res[i][j]<<" ";
     }
     nl;
     }
     return 0;
   }


