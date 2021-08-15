#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
struct edge
{
  int v,c,f;
};

const ll MAX=1e10;
vector<edge> graph[100000];
// Adjacency list of (neighbour, edge weight)

int N;
ll dist[10001];
ll par[10001];

ll dijkstra(int mnf) 
{ // Source and destination
    for (int i = 1; i <=N; ++i) {dist[i] = MAX;par[i]=-1;}
	// Set all distances to infinity

	using T = pair<ll,int>; priority_queue<T,vector<T>,greater<T>> pq;
	dist[1] = 0; // The shortest path from a node to itself is 0
	pq.push({0,1});
	while (pq.size()) 
    {                   
		ll cdist; int node; tie(cdist, node) = pq.top(); pq.pop();
		if (cdist != dist[node]) continue;
		for (auto i : graph[node]) {
			// If we can reach a neighbouring node faster,
			// we update its minimum distance
			if (cdist+i.c < dist[i.v] and i.f>=mnf) 
            {
				pq.push({dist[i.v] = cdist+i.c, i.v});
                par[i.v]=node;
			}
		}
	}
    
    if(dist[N]==MAX)
   return -1;
   
     return dist[N];
}

int main() 
{
    freopen("pump.in", "r", stdin);
	freopen("pump.out", "w", stdout);  
	int M; cin >> N >> M;
    vector<int>flow;
	for (int i = 0; i < M; ++i) {
		int a,b,c,d; cin >> a >> b >> c>>d;
		graph[a].pb({b,c,d});
        graph[b].pb({a,c,d});
        flow.pb(d);
	}
    sort(flow.begin(),flow.end());
	// dijkstra(0);
	// for (int i = 0; i < N; ++i) cout << dist[i] << " "
    ll res=0;
    for(int i=0;i<flow.size();i++)
    {
        ll c1=dijkstra(flow[i]);
        if(c1==-1)continue;

        double fr=(double)flow[i]/(double)c1;
        fr=fr*1000000.0;
        ll temp=(ll)fr;
        res=max(res,temp);
    }
cout<<res;
return 0;
}