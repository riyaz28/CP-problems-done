#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1;
    vector<int>a(n1);
    for(int i=0;i<n1;i++)
        {cin>>a[i];
        }
        cin>>n2;
        vector<int>b(n2);
    for(int i=0;i<n2;i++)
        {cin>>b[i];
        }

    for(int i=0;i<n1;i++)
    {for(int j=0;j<n2;j++)
      { int sum=0;
          sum=a[i]+b[j];
          auto it1=find(a.begin(),a.end(),sum);
          auto it2=find(b.begin(),b.end(),sum);
          if(it1==a.end()&&it2==b.end())
          {
              cout<<a[i]<<" "<<b[j]<<endl;
              exit(0);
          }
      }
    }
    return 0;




}
