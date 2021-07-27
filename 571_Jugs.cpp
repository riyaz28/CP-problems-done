#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define setp(n) cout<<fixed<<setprecision(n)
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define op(x) cout<<x
#define ip(x) cin>>x
#define ipl(s) getline(cin,s)
#define nl cout<<endl
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORE(i, a, b) for (int i=a; i<=(b); i++)




string s[6]={"fill A","fill B","empty A","empty B","pour A B","pour B A"};

void code(int a,int b,int n)
{
 map<pair<int,int>,int>dist;
 queue<pair<int,int>>q;
 map<pair<int,int>,pair<int,int>>par;

 q.push({0,0});
 par[{0,0}]={-1,-1};
 dist[{0,0}]=0;

 pair<int,int>ans;

 while(!q.empty())
 {
   int a1=q.front().first;
   int b1=q.front().second;
   q.pop();
    
    if(b1==n)
    {
        ans={a1,b1};break;
    }
   if(a1<a and dist.find({a,b1})==dist.end())
     {
         q.push({a,b1});
         dist[{a,b1}]=dist[{a1,b1}]+1;
         par[{a,b1}]={a1,b1};
     }
     if(b1<b and dist.find({a1,b})==dist.end())
     {
         q.push({a1,b});
         dist[{a1,b}]=dist[{a1,b1}]+1;
         par[{a1,b}]={a1,b1};
     }
     if(a1>0 and dist.find({0,b1})==dist.end())
     {
         q.push({0,b1});
         dist[{0,b1}]=dist[{a1,b1}]+1;
         par[{0,b1}]={a1,b1};
     }
     if(b1>0 and dist.find({a1,0})==dist.end())
     {
         q.push({a1,0});
         dist[{a1,0}]=dist[{a1,b1}]+1;
         par[{a1,0}]={a1,b1};
     }
     if(a1>0 and b1<b)
     {   int fl=min(a1,b-b1);
        if(dist.find({a1-fl,b1+fl})==dist.end())
       { 
         q.push({a1-fl,b1+fl});
         dist[{a1-fl,b1+fl}]=dist[{a1,b1}]+1;
         par[{a1-fl,b1+fl}]={a1,b1};
       }
     }
     if(a1<a and b1>0)
     {   int fl=min(a-a1,b1);
        if(dist.find({a1+fl,b1-fl})==dist.end())
       { 
         q.push({a1+fl,b1-fl});
         dist[{a1+fl,b1-fl}]=dist[{a1,b1}]+1;
         par[{a1+fl,b1-fl}]={a1,b1};
       }
     }
 }
 int md=10001;

 


 //finding shortest path distance vertex among all possible {i,n} for all i from 1 to a
//   for(int i=0;i<=a;i++)
//  {
//      if(dist.find({i,n})!=dist.end() and dist[{i,n}]<md)
//        {
//           ans={i,n};
//           md=dist[{i,n}];
//        }
//  }

 vector<pair<int,int>>paths;
 
 for(auto it=ans;it!=pair<int,int>({-1,-1});it=par[it])
 {
  paths.pb(it);     
 }

 reverse(all(paths));

// for(int i=0;i<paths.size();i++){cout<<paths[i].first<<" "<<paths[i].second;nl;}
 for(int i=0;i<=paths.size()-2;i++)
 { 
   int c1=paths[i].first,c2=paths[i].second,d1=paths[i+1].first,d2=paths[i+1].second;
   if(d1==a and d1>c1 and c2==d2){cout<<s[0];nl;}
   else if(d2==b and d2>c2 and d1==c1){cout<<s[1];nl;}
   else if(d1==0 and d1<c1 and d2==c2){cout<<s[2];nl;}
   else if(d2==0 and d2<c2 and d1==c1){cout<<s[3];nl;}
   else if(d1<c1 and d2>c2){cout<<s[4];nl;}
   else if(d1>c1 and d2<c2){cout<<s[5];nl;}
 }
cout<<"success";nl;

}



int main()
{
  int a,b,n;
  while(cin>>a>>b>>n)
  {
      code(a,b,n);
  }
return 0;
}





// Mostafa solution
// #include <bits/stdc++.h>
// using namespace std;
 
 
// string actions[] = { "fill B", "fill A", "empty B", "empty A", "pour B A", "pour A B", "Start" };
// enum list		   {  FILL_B ,  FILL_A ,  EMPTY_B ,  EMPTY_A ,  POUR_B_A ,  POUR_A_B  , Start};
 
// struct state 	   {	int a, b, action;	};
 
// const int MAX = 1000+9;
// bool reached[MAX][MAX];
// state prev_state[MAX][MAX];
// queue<state> qu;
 
// int ca, cb, required;
 
// void backtrace(state cur)
// {
// 	if(cur.a == 0 && cur.b == 0)
// 		return;
 
// 	backtrace(prev_state[cur.a][cur.b]);
// 	cout<<actions[cur.action]<<"\n";
// }
 
// void add_state(int a, int b, int action, state parent)
// {
// 	if(reached[a][b])
// 		return;
 
// 	state cur = {a, b, action};
// 	qu.push(cur);
// 	prev_state[a][b] = parent;
// 	reached[a][b] = true;
// }
 
// void BFS(int a, int b)
// {
// 	qu = queue<state>();
// 	memset(reached, 0, sizeof(reached) );
 
// 	add_state(0, 0, Start, state());
 
// 	while(!qu.empty())
// 	{
// 		state cur = qu.front();
// 		qu.pop();
// 		int a  = cur.a, b = cur.b, aa, bb;
 
// 		if(b == required)	// Improvement: Catch it before adding to queue
// 		{
// 			backtrace(cur);
// 			cout<<"success\n";
// 			return;
// 		}
 
// 		add_state(a, cb, FILL_B, cur);
// 		add_state(ca, b, FILL_A, cur);
// 		add_state(a, 0, EMPTY_B, cur);
// 		add_state(0, b, EMPTY_A, cur);
 
// 		aa = (a+b)>ca ? ca:a+b;
// 		bb = (a+b)>ca ? (a+b)-ca:0;
// 		add_state(aa, bb, POUR_B_A, cur);
 
// 		aa = (a+b)>cb ? (a+b)-cb:0;
// 		bb = (a+b)>cb ? cb:a+b;
// 		add_state(aa, bb, POUR_A_B, cur);
// 	}
// }
// // Your turn: Write Dijkstra version. Write DFS version
 
// int main()
// {
// 	while(cin>>ca>>cb>>required)
// 		BFS(0, 0);
 
// 	return 0;
// }
 