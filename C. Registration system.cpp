#include<bits/stdc++.h>
using namespace std;

#define ll long long
int mod=1e5;


int main()
{
	
	unordered_map<string,int>db;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
    {
    	string inp;
    	cin>>inp;
        if(db.count(inp)>0)
        {
        	db[inp]++;
        	cout<<inp<<db[inp]<<endl;
		}
		else
		{
			db[inp]=0;
			cout<<"OK"<<endl;
		}
	}
	return 0;	
}


