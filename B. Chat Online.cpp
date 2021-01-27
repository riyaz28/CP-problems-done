
struct intv{
	int x,y;
};
 
bool check(vector<intv>lz,vector<intv>lx,int t)
{
int n=lx.size();int m=lz.size();
 
FOR(i,0,n)
{
	int L=lx[i].x+t;int R=lx[i].y+t;
	FOR(i,0,m)
	{
	int L1=lz[i].x;int R1=lz[i].y;
	if((L1>=L and L1<=R) or (R1>=L and R1<=R))
	{
		return true;
	}
	}		
}
 
	return false;
}
int main()
{
	int p,q,l,r;
	cin>>p>>q>>l>>r;
	vector<intv>lz;
	vector<intv>lx;
	FORE(i,1,p)
	{
		int in1,in2;cin>>in1>>in2;
		lz.pb({in1,in2});
	}
		FORE(i,1,q)
	{
		int in1,in2;cin>>in1>>in2;
		lx.pb({in1,in2});
	}
	int cnt=0;
 FORE(t,l,r)
 {
   cnt+=check(lz,lx,t);	
 }	
	op(cnt);nl;
	return 0;
	
}
