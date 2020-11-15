#include <bits/stdc++.h>
using namespace std;

int main()
{  int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a.begin(),a.end());
    int sum=0;
    for(int i=0;a[i]<=2048&&i<a.size();i++)
    {
        sum+=a[i];
    }
    if(sum<2048)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
return 0;
}
