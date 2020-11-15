#include <bits/stdc++.h>
using namespace std;

int main()
{ int t;
cin>>t;

while(t--)
{
    long long x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    long long xc,yc;
    if(x1==x2&&y1==y2)
    {
        cout<<0<<endl;
    }
    if(y2==y1&&x1!=x2)
    {
        yc=0;
        xc=abs(x2-x1);
        long long ans=xc+yc;
        cout<<ans<<endl;
    }
    if(x2==x1&&y1!=y2)
    {
        xc=0;
        yc=abs(y2-y1);
        long long ans=xc+yc;
        cout<<ans<<endl;
    }
    if(x1!=x2&&y1!=y2)
    {
        xc=abs(x2-x1);
        yc=abs(y2-y1)+2;
        long long ans=xc+yc;
        cout<<ans<<endl;
    }
}

return 0;
}
