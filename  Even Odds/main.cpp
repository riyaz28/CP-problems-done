#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(n&1)
    {
    if(k<=(n/2+1))
    {
        cout<<2*k-1;
    }
   else if(k>=(n/2+2))
    {
        cout<<(k-(n/2)-1)*2;
    }
    }
    else
    {
       if(k<=n/2)
    {
        cout<<2*k-1;
    }
   else if(k>n/2)
    {
        cout<<(k-(n/2))*2;
    }
   }
    return 0;
}
