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
    vector<int>a(n);
    int sum=0;
    FORE(i,0,n-1){cin>>a[i];sum+=a[i];}
     int i=0;
     if(n==1)
     {
         int res=pow(-1,k)*a[0];
         op(res);nl;
         return 0;
     }
     while(k>0&&i<n)
     {     
          if(a[i]<0)
           {sum+=(-2*a[i]);
           k-=1;
           i++;
           }
        else if(a[i]>=0)
        {
            if(k%2!=0)
            sum-=2*a[i];
            
            break;
        }
     }
     op(sum);nl;
}