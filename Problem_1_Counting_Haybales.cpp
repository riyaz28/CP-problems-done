#include <bits/stdc++.h>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void setIO(string name = "") { // name is nonempty for USACO file I/O
	ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
	// alternatively, cin.tie(0)->sync_with_stdio(0);
	if (sz(name)) {
		freopen((name+".in").c_str(), "r", stdin); // see Input & Output
		freopen((name+".out").c_str(), "w", stdout);
	}
}

int main() {
	setIO("haybales");
	int N,Q; cin >> N >> Q;
	vector<int> v(N);
	for (int& t: v) cin >> t;
	sort(begin(v),end(v));
	auto at_most = [&](int x) 
	{ // returns # of elements <= x
		int lo = 0, hi = sz(v)-1;
		for (--lo; lo < hi;) {
		int mid = lo+(hi-lo+1)/2;
		// find the middle of the current range (rounding up)
		if (v[mid]<=x) lo = mid;
		// if mid works, then all numbers smaller than mid also work
		else hi = mid-1;
		// if mid does not work, greater values would not work too
		// so we don't care about them
	}
		return lo;
	};
	for (int i = 0; i < Q; ++i) {
		int A,B; cin >> A >> B;
		cout << at_most(B)-at_most(A-1) << "\n";
	}
}
