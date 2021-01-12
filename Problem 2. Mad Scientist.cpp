#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	int cnt=0;
	for(int i=0;i<n;i++)
	{ 
	  int j=i+1;
	  if(a[i]!=b[i])
	  {
	  	while(a[j]!=b[j]&&j<n)
	  	{   
	  	j++;
		}
		j=i;
		cnt++;	
      }
      else
      {
      	continue;
	  }
	  
	}
	cout<<cnt<<endl;
}


//o(n) solution
//  bool mismatched = false;
//  for(ll i=0; i<n; i++) {
//    if(A[i] != B[i]) {
//      if(!mismatched) {
//        mismatched = true;
//        ans++;
//      }
//    } else {
//      mismatched = false;
//    }
//  }
//  cout << ans << endl;
//}
