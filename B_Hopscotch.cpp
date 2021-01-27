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
    int a,x,y;
    cin>>a>>x>>y;
     
     int ny=y/a;
     int rem=y%a;
     
     if(rem==0) {op(-1);return 0;}
    
    if(ny<=1)
    {
        double xmax=(double)a/2;
        double xmin=-(double)a/2;

        if(x<xmax and x>xmin)
        {op(ny+1);nl;}
        else {op(-1);return 0;}
    }
    else if(ny>=1 and ny%2==0)
    {
    double xmax=(double)a;
    double mid=0;
    double xmin=-(double)a;
    ny+=1;
    if(x<xmax and x>0)
    {
        int div=ny/2;
        op(3*div+1);
    }
    else if(x>xmin and x<0)
    {
        int div=ny/2;
        op(3*div);
    }
    else
    {
        op(-1);return 0;
    }

    }
    else if(ny>=1 and ny%2!=0)
    {
        double xmax=(double)a/2;
        double xmin=-(double)a/2;
        if(x<xmax and x>xmin)
        {
            ny+=1;
            ny-=2;
            int res=2+ny+(ny/2);
            op(res);nl;
        }
        else {op(-1);return 0;}
    }

    // if((int)y%(int)a==0 or (int)((int)x%(int)a+a)%(int)a==0 or x>a or x<-a)
    // {op(-1);return 0;}
     

}