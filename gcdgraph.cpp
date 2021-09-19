vector<int> parent;
int find(int x)
{
	if(parent[x]!=-1)
		return parent[x]=find(parent[x]);
	else return x;
}
void union_(int x,int y)
{
	int xp=find(x);
	int yp=find(y);
	if(xp!=yp)
		parent[yp]=xp;
}
vector<int> areConnected(int numCities, int threshold, vector<int>source,vector<int>destination) 
{

    vector<vector<int>>queries;
    for(int i=0;i<numCities;i++)
    {
        queries.push_back({source[i],dest[i]});
    }
	parent.resize(n+1,-1);
	for(int i=1;i<=n;++i)
		for(int j=1;j<=sqrt(i);++j)
			if(i%j==0)
			{
				if(j>threshold)
					union_(j,i);
				if((i/j)>threshold)
					union_(i/j,i);
			}
	vector<int> ret(queries.size());
	for(int i=0;i<queries.size();++i)
		ret[i]=find(queries[i][0])==find(queries[i][1]);
        
	return ret;
}