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
 
 
int main() {
 
	ios_base::sync_with_stdio(0); cin.tie(0);
 
	int t;
	cin >> t;
	while (t--) {
		ll n, x, temp, num, ans = 0;
		cin >> n >> x;
		ll vsize = n;
		vector<pair<<ll,ll>> v;
		FOR(i, 0, n) {
			cin >> temp;
			v.pb(mp(temp,1));
		}
 
		for (ll i = 0; i < v.size(); i++) 
		{
			if (v[i].first % x == 0&&v[i].second==1) 
			{
				
				v.pb({v[i].first/x,x});
			} 
			else if(v[i].first%x==0&&v[i].second>1)
			{
			v.pb({v[i].first/x,x*v[i].second});	
			}
			else {
				for (ll p = 0; p < v.size(); p++)
					ans += (v[p].first*v[p].second);
				break;
			}
		}
 
 
		cout << ans << endl;
 
	}
	return 0;
 
}
