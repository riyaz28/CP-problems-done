#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x;
#define ip(x) cin>>x;
#define ipl(s) getline(cin,s);
#define nl cout<<endl;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)
 
 
const int N=1e5+1;
bool prime[N];
vector<ll>primes;// all primes no's b/w 1 to 1e5
void SieveOfEratosthenes() 
{  
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=N-2; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=N-2; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // pb all primes
    for (int p=2; p<=N-2; p++) 
       if (prime[p]) 
          primes.pb(p);
}
 
int main()
{
	SieveOfEratosthenes();
	int t;ip(t);
	while(t--)
	{   
	    ll sum=0;
		ll d;ip(d);
		ll res=1;
		auto it=lower_bound(primes.begin(),primes.end(),d+1);
		auto it1=lower_bound(it,primes.end(),*it+d);
		//cout<<*it1<<" "<<*it;nl;
		res=(*it1)*(*it);
		op(res);nl;
	}
}
