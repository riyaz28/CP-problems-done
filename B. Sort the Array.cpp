#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)

int main()
{
 int n;
 cin>>n;
 vector<int>a(n,0);
 FOR(i,0,n)cin>>a[i]; 
 vector<int>b=a;
 sort(b.begin(),b.end());
 int li,ri;
 li=ri=0;
 FOR(i,0,n-1){
 	if(a[i]>a[i+1]){li=i;break;}
 	else continue;
 }
FOR(i,li+1,n){
	if(a[i]>a[i-1]) {break;}
	else ri=i;
}
//cout<<li<<ri<<"li and ri"<<endl;
sort(a.begin()+li,a.begin()+ri+1);
if(a==b)
{
	cout<<"yes"<<endl;
	cout<<li+1<<" "<<ri+1;
}
else
{
	cout<<"no"<<endl;
}
	
}
